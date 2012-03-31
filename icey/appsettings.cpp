#include "appsettings.h"
#include "ui_appsettings.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include <QInputDialog>
#include <QDesktopServices>
#include <string>


appSettings::appSettings(QWidget *parent) :
        QWidget(parent),
        ui(new Ui::appSettings)
{
    ui->setupUi(this);
 //   loadSettings();
    //qs.enableKineticScrollFor(ui->scrollArea);

//    connect(&manager, SIGNAL(finished(QNetworkReply*)),
//            SLOT(downloadFinished(QNetworkReply*)));

//    connect(&managermain, SIGNAL(finished(QNetworkReply*)),
//            SLOT(downloadFinishedmain(QNetworkReply*)));
   this->createActions();


}

appSettings::~appSettings()
{
    settings.sync();

    delete ui;
    //delete appConfigure;

}


bool VerifyToken(char *strset, char search)
{
    char *p;
    bool i = false;
    p = strchr(strset, search);



    if (p != NULL)
    {
        i = true;
    }
    else
    {
        i = false;
    }
    return i;

    delete p;

}


void appSettings::on_backButton_clicked()
{
    this->close();
}



void appSettings::on_updateButton_clicked()
{

    url = QUrl(tr("http://www.ifewalter.com/icey/"));
    bool ret = QDesktopServices::openUrl(url);
    if (!ret)
    {
        QMessageBox::information(this,"handle not","Failed to launch update.");
    }
    else
    {
        //   QMessageBox::information(this,"handle not","success");
    }

}

void appSettings::createActions()
{
    aboutaction = new QAction("About", this);
    connect(aboutaction, SIGNAL(triggered()), this, SLOT(AboutApp()));

    exitaction = new QAction("Exit", this);
    connect(exitaction, SIGNAL(triggered()),this, SLOT(ExitApp()));

    qm = new QMenu(this);

    qm->addAction(aboutaction);
    qm->addAction(exitaction);

    ui->optionsButton->setMenu(qm);
}
void appSettings::ExitApp()
{
    exit(0);
}
void appSettings::AboutApp()
{
    QMessageBox::about(this,"About Icey", "Icey is an application that allows access to emergency medical and contact information. more details at http://www.ifewalter.com");
}
