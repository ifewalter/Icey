#include "bioconfig.h"
#include "ui_bioconfig.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>
#include <QSqlDriver>
#include <QDir>

BioConfig::BioConfig(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BioConfig)
{
    ui->setupUi(this);
    loadBio();
    this->createActions();
}

BioConfig::~BioConfig()
{
    delete ui;
}

void BioConfig::saveBio()
{
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




    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&file);

    QString tempString;

    tempString = ui->nameText->text().remove(" ", Qt::CaseInsensitive);

    if (tempString != "")
    {
        out << ui->nameText->text() << "\n" << ui->ageText->text() << "\n" << ui->bloodGroupText->text();
     QMessageBox::information(this,"save Alert", "Information Saved");
    }
    else
    {
        QMessageBox::information(this, "input Error", "Please give your name");
    }

    file.close();
    file.deleteLater();



}


void BioConfig::loadBio()
{

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

     QString bio[6];

    QTextStream out(&file);
    file.open(QIODevice::ReadOnly | QIODevice::Text );
    for (int i=0;i<7;i++)
    {
        if (!out.atEnd())
        {
            bio[i] = out.readLine();
            //ui->listWidget->addItem(bio[i]);
        }
        else
        {
            break;
        }
    }

    ui->nameText->setText(defaultText(bio[0],"Undefined", "", ""));
    ui->ageText->setText(defaultText(bio[1],"0", "", ""));
    ui->bloodGroupText->setText(defaultText(bio[2], "-", "", ""));

    file.close();
    file.deleteLater();
}

QString BioConfig::defaultText(QString realString, QString defText, QString preText, QString appText)
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

void BioConfig::on_cancelButton_clicked()
{
    //Configure *c = new Configure();
    //c->showFullScreen();
    this->close();

}


void BioConfig::createActions()
{
    qm = new QMenu(this);

    aboutaction = new QAction("About", this);
    connect(aboutaction, SIGNAL(triggered()), this, SLOT(AboutApp()));

    exitaction = new QAction("Exit", this);
    connect(exitaction, SIGNAL(triggered()),this, SLOT(ExitApp()));

    saveaction = new QAction("Save", this);
    connect(saveaction, SIGNAL(triggered()),this, SLOT(SaveAction()));

    qm->addAction(saveaction);
    qm->addAction(aboutaction);
    qm->addAction(exitaction);

    ui->optionButton->setMenu(qm);

}
void BioConfig::ExitApp()
{
    exit(0);
}
void BioConfig::AboutApp()
{
    QMessageBox::about(this,"About Icey", "Icey is an application that allows access to emergency medical and contact information. more details at http://www.ifewalter.com");
}
void BioConfig::SaveAction()
{
    saveBio();
}
