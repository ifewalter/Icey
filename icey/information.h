#ifndef INFORMATION_H
#define INFORMATION_H

#include <QWidget>
#include <QsKineticScroller.h>
#include <unlocker.h>
#include <QPointer>
#include <QGeoPositionInfoSource>
#include <QGeoPositionInfo>

#include <QAccelerometer>
#include <QOrientationSensor>
#include <QRotationSensor>
#include <QAmbientLightSensor>
#include <QCompass>
#include <QMagnetometer>
#include <QProximitySensor>
#include <QTapSensor>
//#include <qtmessaging.h>
#include <QMessage>
#include <QMessageAccount>
#include <QMessageService>




namespace Ui {
class Information;

}

QTM_USE_NAMESPACE


class Information : public QWidget
{
    Q_OBJECT
    public:

    explicit Information(QWidget *parent = 0);
    ~Information();
    QAction *aboutapp;
    QAction *exitapp;
    QAction *confapp;

    enum ScreenOrientation {
        ScreenOrientationLockPortrait,
        ScreenOrientationLockLandscape,
        ScreenOrientationAuto
    };
    // Note that this will only have an effect on Symbian and Fremantle.
    void setOrientation(ScreenOrientation orientation);
    void showExpanded();
    void startGPS();

    //accelerometer
    void setupGeneral();

    private:
    Ui::Information *ui;
    QString defaultText(QString realString, QString defText, QString preText, QString appText);
    QString medication[102][4];
    QString contact[102][4];
    void loadBio();
    void createActions();
    void loadAllergies();
    void loadContacts();
    void loadMedications();
    void loadConditions();
    void loadFirstRun();
    void loadInsurance();

    QsKineticScroller allergyscroll, medicationscroll, conditionscroll, contactscroll;
    Unlocker *u;
    Configure *c;
    QMenu *qm;

    QPointer<QGeoPositionInfoSource> locationDataSource;
    QAccelerometer *accelerometer;

    QRotationSensor *rotationSensor;


    long lastUpdate;
    float x, y, z;
    float last_x, last_y, last_z;
    int SHAKE_THRESHOLD;

    float gpsSpeed;
    //messaging
   // QMessageServiceAction m_MessageServiceAction;
   // QMessageId m_sendId;
    QMessage message;
    QMessageService messageService;
    float longitude, latitude;



    private slots:

    void on_exitButton_clicked();
    void aboutApp();
    void exitApp();
    void confApp();
    void positionUpdated(QGeoPositionInfo geoPotitionInfo);

    //acceleremeter
    void lock();
    void updateRotation();
    float updateAccelerometer();
    void playAlarm();

    //accident detection
    void startDetection();
    void stopDetection();


    //messaging

    void sendSMS(QString phoneNumber);
};

#endif // INFORMATION_H
