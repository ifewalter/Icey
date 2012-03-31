#include "information.h"
#include "ui_information.h"
#include <QFile>
#include <QTextStream>
#include <QSettings>
#include <QMessageBox>
#include <QDir>
#include <math.h>
#include <QGeoCoordinate>
#include <QDebug>
#include <QSound>


Information::Information(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Information)
{

    ui->setupUi(this);
    lastUpdate = -1;
    SHAKE_THRESHOLD = 800;
    gpsSpeed =0;
    loadBio();
    loadAllergies();
    loadConditions();
    createActions();
    loadMedications();
    loadContacts();
    loadInsurance();
    setupGeneral();
    loadFirstRun();
    contactscroll.enableKineticScrollFor(ui->contactsList);
    allergyscroll.enableKineticScrollFor(ui->allergyList);
    conditionscroll.enableKineticScrollFor(ui->conditionsList);
    medicationscroll.enableKineticScrollFor(ui->medicationsList);

    connect(rotationSensor, SIGNAL(readingChanged()), SLOT(updateRotation()));
    connect(rotationSensor, SIGNAL(readingChanged()), SLOT(updateAccelerometer()));

    //save this for later, since we're don testing gps stuffs for now, let us
    //save our battery for something else.
    startGPS();

}

void Information::positionUpdated(QGeoPositionInfo geoPositionInfo)
{
    if (geoPositionInfo.isValid())
    {
        // Stop regular position updates, because a valid position has been
        // obtained
        // locationDataSource->stopUpdates();

        // Get the current location as latitude and longitude
        QGeoCoordinate geoCoordinate = geoPositionInfo.coordinate();
        latitude = geoCoordinate.latitude();
        longitude = geoCoordinate.longitude();

        if (QGeoPositionInfo::GroundSpeed)
        {
            gpsSpeed = geoPositionInfo.attribute(QGeoPositionInfo::GroundSpeed);

            //start the accident detection algorithm
            if (gpsSpeed > 80.00)
            {
                this->startDetection();
            }
            else
            {
                this->stopDetection();
            }

        }
        else
        {
            QMessageBox::information(this, "GPS Error", "Sorry, Your device doesn't support GPS speeds.");

        }
    }
}

void Information::startDetection()
{
    //enable accelerometer listener

    float  accelerometerValue = this->updateAccelerometer();


    if ( accelerometerValue > 45)
    {
        // playAlarm();
        locationDataSource->stopUpdates();
        QString tempConstructor;
#ifdef Q_OS_LINUX
        // NOTE: We have to store database file into user home folder in Linux
        QString path(QDir::home().path());
        path.append(QDir::separator()).append("contact.dat");
        path = QDir::toNativeSeparators(path);
        QFile file(path);
#else
        // NOTE: File exists in the application private folder, in Symbian Qt implementation
        QFile file("contact.dat");
#endif



        QTextStream out(&file);
        file.open(QIODevice::ReadOnly | QIODevice::Text );
        for (int i=0;i<101;i++)
        {
            if (!out.atEnd())
            {

                for (int j=0;j<3;j++)
                {

                    if (!out.atEnd())
                    {
                        contact[i][j] = out.readLine();

                    }
                    else
                    {
                        break;
                    }
                }
                this->sendSMS(contact[i][2]);
            }
            else
            {
                break;
            }
        }
        file.close();
        file.deleteLater();
        this->stopDetection();
    }
}
void Information::stopDetection()
{
    //stop Accelerometer listener
    this->lock();

}

void Information::playAlarm()
{



    /*

    QFile alarmFile("alarms/alarm.wav");
    if (alarmFile.exists() == true)
    {
        qDebug() << "alarm exists";
        QSound::play("alarms/alarm.wav");
    }
    else
    {
        qDebug() << "File doesn't exist";
    }
    */
}


void Information::sendSMS(QString phoneNumber)
{

    QString body = QString("We believe %1 is in distress, please direct emergency services to this location http://maps.google.com/maps?q=%2,%3 sent via ICEY emergency app.").arg(ui->nameLabel->text()).arg(longitude).arg(latitude);
    message.setType(QMessage::Sms);
    message.setParentAccountId(QMessageAccount::defaultAccount(QMessage::Sms));
    message.setTo(QMessageAddress(QMessageAddress::Phone, phoneNumber));
    message.setSubject("ICEY SMS");
    message.setBody(body);
    messageService.send(message);
}

void Information::startGPS()
{
    // Obtain the location data source if it is not obtained already
    if (!locationDataSource)
    {
        locationDataSource =
                QGeoPositionInfoSource::createDefaultSource(this);

        if (locationDataSource)
        {
            // Location data source obtained
            //            locationDataSource->
            //            QMessageBox msg = new QMessageBox();
            //            msg.setText("");
            QObject::connect(locationDataSource,
                             SIGNAL(positionUpdated(QGeoPositionInfo)),
                             this,
                             SLOT(positionUpdated(QGeoPositionInfo)));
            locationDataSource->setUpdateInterval(100);
            locationDataSource->setPreferredPositioningMethods(QGeoPositionInfoSource::SatellitePositioningMethods);

            locationDataSource->startUpdates();
        } else {
            // Not able to obtain the location data source
            // TODO: Error handling
        }
    }
    else
    {
        locationDataSource->setUpdateInterval(5000);
        locationDataSource->startUpdates();
    }
}


void Information::setOrientation(ScreenOrientation orientation)
{
#if defined(Q_OS_SYMBIAN)
    // If the version of Qt on the device is < 4.7.2, that attribute won't work
    if (orientation != ScreenOrientationAuto) {
        const QStringList v = QString::fromAscii(qVersion()).split(QLatin1Char('.'));
        if (v.count() == 3 && (v.at(0).toInt() << 16 | v.at(1).toInt() << 8 | v.at(2).toInt()) < 0x040702) {
            qWarning("Screen orientation locking only supported with Qt 4.7.2 and above");
            return;
        }
    }
#endif // Q_OS_SYMBIAN

    Qt::WidgetAttribute attribute;
    switch (orientation) {
#if QT_VERSION < 0x040702
    // Qt < 4.7.2 does not yet have the Qt::WA_*Orientation attributes
    case ScreenOrientationLockPortrait:
        attribute = static_cast<Qt::WidgetAttribute>(128);
        break;
    case ScreenOrientationLockLandscape:
        attribute = static_cast<Qt::WidgetAttribute>(129);
        break;
    default:
    case ScreenOrientationAuto:
        attribute = static_cast<Qt::WidgetAttribute>(130);
        break;
#else // QT_VERSION < 0x040702
    case ScreenOrientationLockPortrait:
        attribute = Qt::WA_LockPortraitOrientation;
        break;
    case ScreenOrientationLockLandscape:
        attribute = Qt::WA_LockLandscapeOrientation;
        break;
    default:
    case ScreenOrientationAuto:
        attribute = Qt::WA_AutoOrientation;
        break;
#endif // QT_VERSION < 0x040702
    };
    setAttribute(attribute, true);
}

void Information::showExpanded()
{
#if defined(Q_OS_SYMBIAN) || defined(Q_WS_SIMULATOR)
    showFullScreen();
#elif defined(Q_WS_MAEMO_5)
    showMaximized();
#else
    show();
#endif
}

Information::~Information()
{
    delete ui;
    delete u;
    delete c;
    delete accelerometer;
    delete rotationSensor;

}


void Information::loadBio()
{
    QString bio[6];
#ifdef Q_OS_LINUX
    // NOTE: We have to store database file into user home folder in Linux
    QString path(QDir::home().path());
    path.append(QDir::separator()).append("bio.dat");
    path = QDir::toNativeSeparators(path);
    QFile file(path);
#else
    // NOTE: File exists in the application private folder, in Symbian Qt implementation
    QFile file("bio.dat");
#endif


    QTextStream out(&file);
    file.open(QIODevice::ReadOnly | QIODevice::Text );
    for (int i=0;i<7;i++)
    {
        if (!out.atEnd())
        {
            bio[i] = out.readLine();
        }
        else
        {
            break;
        }
    }

    ui->nameLabel->setText(defaultText(bio[0],"Undefined", "Name: ", ""));
    ui->ageLabel->setText(defaultText(bio[1],"Undefined", "Age: ", "Years"));
    ui->bloodTypeLabel->setText(defaultText(bio[2], "Undefined", "Blood Group: ", ""));

    file.close();
    file.deleteLater();
}


QString Information::defaultText(QString realString, QString defText, QString preText, QString appText)
{
    QString allTogether;
    if (realString == "")
    {

        allTogether = allTogether.append(preText.append(defText));

        return allTogether;

    }
    else
    {
        allTogether = allTogether.append(preText.append(realString.append(appText)));
        return allTogether;
    }
}

void Information::loadFirstRun()
{
#ifdef Q_OS_LINUX
    // NOTE: We have to store database file into user home folder in Linux
    QString path(QDir::home().path());
    path.append(QDir::separator()).append("icey_first_run.dat");
    path = QDir::toNativeSeparators(path);
    QFile file(path);
#else
    // NOTE: File exists in the application private folder, in Symbian Qt implementation
    QFile file("icey_first_run.dat");
#endif

    if (!(file.exists()))
    {
        QMessageBox::information(this,"First Run","To Configure \n - Tap Options and provide necessary data. \n \n TO USE \n Launch app and mount on car dashboard or place in your pocket while driving.");

        file.open(QIODevice::WriteOnly | QIODevice::Text);
        QTextStream out(&file);

        out << "Done" ;

        file.close();
        file.deleteLater();
    }
}

void Information::on_exitButton_clicked()
{
    this->close();
}

void Information::loadAllergies()
{
#ifdef Q_OS_LINUX
    // NOTE: We have to store database file into user home folder in Linux
    QString path(QDir::home().path());
    path.append(QDir::separator()).append("allergy.dat");
    path = QDir::toNativeSeparators(path);
    QFile file(path);
#else
    // NOTE: File exists in the application private folder, in Symbian Qt implementation
    QFile file("allergy.dat");
#endif

    QString allergy[100];
    QTextStream out(&file);
    file.open(QIODevice::ReadOnly | QIODevice::Text );
    for (int i=0;i<101;i++)
    {
        if (!out.atEnd())
        {
            allergy[i] = out.readLine();
            ui->allergyList->addItem(allergy[i]);

        }
        else
        {
            break;
        }
    }
    if (allergy->count() < 1)
    {
        ui->allergyList->addItem("No allergies listed");
    }

    file.close();
    file.deleteLater();
}

void Information::loadInsurance()
{


#ifdef Q_OS_LINUX
        // NOTE: We have to store database file into user home folder in Linux
        QString path(QDir::home().path());
        path.append(QDir::separator()).append("icey_insurance.dat");
        path = QDir::toNativeSeparators(path);
        QFile file(path);
#else
        // NOTE: File exists in the application private folder, in Symbian Qt implementation
        QFile file("icey_insurance.dat");
#endif

        QTextStream out(&file);
        file.open(QIODevice::ReadOnly | QIODevice::Text );
        QString insuranceValue[4];
        for (int i=0;i<7;i++)
        {
            if (!out.atEnd())
            {
                insuranceValue[i] = out.readLine();
            }
            else
            {
                break;
            }
        }

        ui->insuranceProvider->setText(defaultText(insuranceValue[0],"Undefined", "Provider: \n", ""));
        ui->insuranceID->setText(defaultText(insuranceValue[1],"Undefined","Insurance ID: \n", ""));


        file.close();
        file.deleteLater();
    }

void Information::loadConditions()
{
#ifdef Q_OS_LINUX
    // NOTE: We have to store database file into user home folder in Linux
    QString path(QDir::home().path());
    path.append(QDir::separator()).append("condition.dat");
    path = QDir::toNativeSeparators(path);
    QFile file(path);
#else
    // NOTE: File exists in the application private folder, in Symbian Qt implementation
    QFile file("condition.dat");
#endif




    QString conditions[100];

    QTextStream out(&file);
    file.open(QIODevice::ReadOnly | QIODevice::Text );
    for (int i=0;i<101;i++)
    {
        if (!out.atEnd())
        {
            conditions[i] = out.readLine();
            ui->conditionsList->addItem(conditions[i]);

        }
        else
        {
            break;
        }
    }
    if (conditions->count() < 1)
    {
        ui->conditionsList->addItem("No medical conditions listed");
    }

    file.close();
    file.deleteLater();
}

void Information::loadMedications()
{
#ifdef Q_OS_LINUX
    // NOTE: We have to store database file into user home folder in Linux
    QString path(QDir::home().path());
    path.append(QDir::separator()).append("medication.dat");
    path = QDir::toNativeSeparators(path);
    QFile file(path);
#else
    // NOTE: File exists in the application private folder, in Symbian Qt implementation
    QFile file("medication.dat");
#endif


    QString tempConstructor;


    QTextStream out(&file);
    file.open(QIODevice::ReadOnly | QIODevice::Text );
    for (int i=0;i<101;i++)
    {
        if (!out.atEnd())
        {

            for (int j=0;j<3;j++)
            {

                if (!out.atEnd())
                {
                    medication[i][j] = out.readLine();

                }
                else
                {
                    break;
                }
            }
            tempConstructor = medication[i][0];
            tempConstructor = tempConstructor.append("\n");
            tempConstructor = tempConstructor.append(medication[i][1]);
            tempConstructor = tempConstructor.append("\t\n");
            tempConstructor = tempConstructor.append(medication[i][2]);
            ui->medicationsList->addItem(tempConstructor);

        }
        else
        {
            break;
        }
    }
    file.close();
    file.deleteLater();


}

void Information::loadContacts()
{

#ifdef Q_OS_LINUX
    // NOTE: We have to store database file into user home folder in Linux
    QString path(QDir::home().path());
    path.append(QDir::separator()).append("contact.dat");
    path = QDir::toNativeSeparators(path);
    QFile file(path);
#else
    // NOTE: File exists in the application private folder, in Symbian Qt implementation
    QFile file("contact.dat");
#endif


    QString tempConstructor;


    QTextStream out(&file);
    file.open(QIODevice::ReadOnly | QIODevice::Text );
    for (int i=0;i<101;i++)
    {
        if (!out.atEnd())
        {

            for (int j=0;j<3;j++)
            {

                if (!out.atEnd())
                {
                    contact[i][j] = out.readLine();

                }
                else
                {
                    break;
                }
            }
            tempConstructor = contact[i][0];
            tempConstructor = tempConstructor.append("\n");
            tempConstructor = tempConstructor.append(contact[i][1]);
            tempConstructor = tempConstructor.append("\t\n");
            tempConstructor = tempConstructor.append(contact[i][2]);
            ui->contactsList->addItem(tempConstructor);
        }
        else
        {
            break;
        }
    }
    file.close();
    file.deleteLater();
}

void Information::createActions()
{
    confapp = new QAction("Configure Application", this);
    connect(confapp, SIGNAL(triggered()),this,SLOT(confApp()));

    aboutapp = new QAction("About Icey", this);
    connect(aboutapp, SIGNAL(triggered()),this,SLOT(aboutApp()));

    exitapp = new QAction("Exit", this);
    connect(exitapp, SIGNAL(triggered()),this,SLOT(exitApp()));
    qm = new QMenu(this);
    qm->addAction(confapp);
    qm->addAction(aboutapp);
    qm->addAction(exitapp);
    ui->pushButton->setMenu(qm);
}

void Information::aboutApp()
{
    QMessageBox::about(this,"About Icey", "Icey is an application that allows access to emergency medical and contact information. more details at http://www.ifewalter.com");
}
void Information::exitApp()
{
    exit(0);
}
void Information::confApp()
{
    QSettings settings;
    int unlockstatus = settings.value("unlockstatus").toInt();

    QString nlc = settings.value("unlockcode").toString();

    if (unlockstatus == 1 || nlc == "")
    {
        c = new Configure();
        c->showFullScreen();
        this->close();
    }
    else
    {
        u = new Unlocker();
        u->showFullScreen();
    }

}


void Information::setupGeneral()
{
    accelerometer = new QAccelerometer(this);
    accelerometer->start();
    if (!accelerometer->isActive()) {
        qDebug() << "AccelerometerSensor didn't start!";
    }
    // Initialise and start the rotation sensor
    rotationSensor = new QRotationSensor(this);
    rotationSensor->start();
    if (!rotationSensor->isActive()) {
        qDebug() << "RotationSensor didn't start!";
    }
}

void Information::updateRotation()
{

    // Read the rotation sensor data and output it to the screen
    QRotationReading *rotReading = rotationSensor->reading();
    QString output = QString("Rotation: %1 x %2 y %3 z").
            arg(rotReading->x()).
            arg(rotReading->y()).
            arg(rotReading->z());
    //  ui->nameLabel->setText(output);

}

float Information::updateAccelerometer()
{

    // Read the accelerometer data and output it to the screen
    QAccelerometerReading *accReading = accelerometer->reading();
    float x = accReading->x();
    float y = accReading->y();
    float z = accReading->z();


    float shake = fabs(x) + fabs(y) + fabs(z);
    return shake;

}

void Information::lock()
{
    if (accelerometer->isActive()) {
        accelerometer->stop();
        rotationSensor->stop();
    }
    else {
        accelerometer->start();
        rotationSensor->start();
    }


}
