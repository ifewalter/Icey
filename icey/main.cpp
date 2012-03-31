#include "information.h"

#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

   // Lock mainWindow;
    Information mainWindow;
    mainWindow.setOrientation(Information::ScreenOrientationAuto);
    mainWindow.showExpanded();

    return app.exec();
}
