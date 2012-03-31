#include "configure.h"
#include "ui_configure.h"
#include <QMessageBox>
#include <information.h>

Configure::Configure(QWidget *parent) :
        QWidget(parent),
        ui(new Ui::Configure)
{
    ui->setupUi(this);
this->createActions();
}
Configure::~Configure()
{
    delete ui;
    delete a;
    delete b;
    delete c;
    delete m;
    delete qm;
    delete ic;
}

void Configure::createActions()
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
void Configure::ExitApp()
{
    Information *i = new Information();
    i->showFullScreen();
    this->close();
    //exit(0);
}
void Configure::AboutApp()
{
    QMessageBox::about(this,"About Icey", "Icey is an application that allows access to emergency medical and contact information. more details at http://www.ifewalter.com");
}
void Configure::on_bioconfigButton_clicked()
{
    b = new BioConfig();
    b->showFullScreen();
    //this->close();
}

void Configure::on_exitButton_clicked()
{
    int r = QMessageBox::question(this, tr("Information/UNlock"),
                                  tr("Exit Configuration?"),
                                  QMessageBox::Yes | QMessageBox::No
                                  );
    if (r == QMessageBox::No)
    {

        //this->close();

    }
    else if (r == QMessageBox::Yes)
    {
        //exit(0);
        Information *i = new Information();
        i->showFullScreen();
        this->close();
    }
}

void Configure::on_allergyconfigButton_clicked()
{
    a = new Allergies();
    a->showFullScreen();
    //this->close();
}

void Configure::on_conditionconfigButton_clicked()
{
    c = new Conditions();
    c->showFullScreen();
    //this->close();
}

void Configure::on_contactconfigButton_clicked()
{
    Contacts *cont = new Contacts();
    cont->showFullScreen();
    //this->close();
}

void Configure::on_medicationconfigButton_clicked()
{
    m = new Medications();
    m->showFullScreen();
    //this->close();
}

void Configure::on_appsettingsconfigButton_clicked()
{
    appSettings *ap = new appSettings();
    ap->showFullScreen();
    //this->close();
}

void Configure::on_insuranceconfigButton_clicked()
{
    ic = new InsuranceConfig();
    ic->showFullScreen();
}
