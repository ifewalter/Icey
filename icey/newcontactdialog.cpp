#include "newcontactdialog.h"
#include "ui_newcontactdialog.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDir>
#include <contacts.h>

newContactDialog::newContactDialog(QWidget *parent) :
        QDialog(parent),
        ui(new Ui::newContactDialog)
{
    ui->setupUi(this);
    loadDefaults();

}

newContactDialog::~newContactDialog()
{
    delete ui;
    delete co;
}


void newContactDialog::loadDefaults()
{
    ui->nameLine->setText(contactname);
    ui->relationshipLine->setText(contactrelationship);
    ui->numberLine->setText(contactnumber);
}
void newContactDialog::on_backButton_clicked()
{
    this->close();
}


void newContactDialog::on_okButton_clicked()
{
    contactname = ui->nameLine->text();
    contactrelationship = ui->relationshipLine->text();
    contactnumber = ui->numberLine->text();

    if (contactname == "" || contactrelationship == "" || contactnumber == "")
    {
        QMessageBox::critical(this,"input error", "I will not accept this contact, because i must be able to save your life in case of emergency. Please give full details of your emergency contact");
    }
    else if (contactname != "" && contactrelationship != "" && contactnumber != "")
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



        file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text);
        QTextStream out(&file);
        out << contactname << "\n" << contactrelationship << "\n" << contactnumber << "\n";
        file.close();
        file.deleteLater();
        co = new Contacts();
        co->showFullScreen();
        this->close();
    }
}
