#ifndef LOCK_H
#define LOCK_H

#include <QWidget>
#include <QSymbianEvent>
#include <QDesktopWidget>
#include <QKeyEvent>
#include "information.h"

#if defined Q_WS_S60
#include <avkon.hrh>
#include <w32std.h>
#endif


namespace Ui {
    class Lock;
}

class Lock : public QWidget
{
    Q_OBJECT

public:
    explicit Lock(QWidget *parent = 0);
    ~Lock();
    void setwallpaper();
    enum ScreenOrientation {
           ScreenOrientationLockPortrait,
           ScreenOrientationLockLandscape,
           ScreenOrientationAuto
       };
       // Note that this will only have an effect on Symbian and Fremantle.
       void setOrientation(ScreenOrientation orientation);

       void showExpanded();

private:
    Ui::Lock *ui;
    QDesktopWidget *desktopwidget;
    Information *i;
    void checkStat();

private slots:
    void on_iceButton_clicked();


};

#endif // LOCK_H
