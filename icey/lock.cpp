#include "lock.h"
#include "ui_lock.h"
#include <QPropertyAnimation>
#include <QGraphicsBlurEffect>
#include <QTimer>
#include <QSettings>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDir>

#if defined(Q_WS_S60)
#include <eikenv.h>
#include <w32std.h>
#include <w32adll.h>
#include <w32click.h>
#include <apgtask.h>
#include <apgwgnam.h>
#include <aknappui.h>
#include <eikapp.h>
#include <eikdef.h>
#include <eikenv.h>
#endif

Lock::Lock(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Lock)
{
    ui->setupUi(this);
    setwallpaper();
    checkStat();
    installEventFilter(this);
    QSettings settings;

//    if( wasAutoStarted ) {

//        settings.setValue("autostart", true);

//    } else {
//        settings.setValue("autostart", false);
//    }
    settings.sync();

}


void Lock::setOrientation(ScreenOrientation orientation)
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

void Lock::showExpanded()
{
#if defined(Q_OS_SYMBIAN) || defined(Q_WS_SIMULATOR)
    showFullScreen();
#elif defined(Q_WS_MAEMO_5)
    showMaximized();
#else
    show();
#endif
}


Lock::~Lock()
{
    delete ui;
    delete desktopwidget;
    delete i;
}

void Lock::on_iceButton_clicked()
{

    i = new Information();
    i->showFullScreen();
}
void Lock::setwallpaper()
{
    QSettings settings;
    QString wallpaperlocation ;
    wallpaperlocation = settings.value("wallpaper").toString();

    if (wallpaperlocation == "")
    {
        wallpaperlocation = ":/images/background/sunset.jpg";
    }
    else
    {
        wallpaperlocation = wallpaperlocation;
    }


    QPalette p = palette();
    QPixmap pixmap1(wallpaperlocation);
    desktopwidget = QApplication::desktop();
    QRect rect = desktopwidget->availableGeometry();
    QSize size(rect.width(), rect.height());
    QPixmap pixmap(pixmap1.scaled(size));
    p.setBrush(QPalette::Background, pixmap);
    setPalette(p);
}

void Lock::checkStat()
{
#ifdef Q_OS_LINUX
    // NOTE: We have to store database file into user home folder in Linux
    QString path(QDir::home().path());
    path.append(QDir::separator()).append("icey.dat");
    path = QDir::toNativeSeparators(path);
    QFile file(path);
    #else
    // NOTE: File exists in the application private folder, in Symbian Qt implementation
    QFile file("icey.dat");
    #endif


    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&file);

    out << "true" << "\n";

    file.close();
    file.deleteLater();
}
