#include "newmedicationdialog.h"
#include "ui_newmedicationdialog.h"
#include <QMessageBox>
#include <QFile>
#include <QDir>
#include <QTextStream>

newMedicationDialog::newMedicationDialog(QWidget *parent) :
        QDialog(parent),
        ui(new Ui::newMedicationDialog)
{
    ui->setupUi(this);
}

newMedicationDialog::~newMedicationDialog()
{
    delete ui;
}

void newMedicationDialog::on_backButton_clicked()
{
    this->close();
}


void newMedicationDialog::on_okButton_clicked()
{
    medicationname = ui->nameLine->text();
    medicationdetails = ui->detailsLine->text();
    medicationdosage = ui->dosageLine->text();

    if (medicationname == "" || medicationdosage == "" || medicationdetails == "")
    {
        QMessageBox::critical(this,"input error", "Incomplete entry, please give full details of your medciation");
    }
    else if (medicationname != "" && medicationdosage != "" && medicationdetails != "")
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



        file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text);
        QTextStream out(&file);
        out << medicationname << "\n" << medicationdetails << "\n" << medicationdosage << "\n";
        file.close();
        file.deleteLater();
        Medications *co = new Medications();
        co->showFullScreen();
        this->close();
    }
}
