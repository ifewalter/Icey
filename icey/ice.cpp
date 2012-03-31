#include "ice.h"
#include "ui_ice.h"
#include "lock.h"

#include <contacts.h>
#include <allergies.h>
#include <conditions.h>
#include <medications.h>


#include <QTextStream>
#include <QFile>
#include <QScrollArea>

#include <QMessageBox>



Ice::Ice(QWidget *parent) :
        QWidget(parent),
        ui(new Ui::Ice)
{
    ui->setupUi(this);

    loadBio();
    hideBioButton();
}

Ice::~Ice()
{
    delete ui;
}


void Ice::on_exitButton_clicked()
{   //return to the lock form
    Lock *j = new Lock();
    j->setWindowFlags(Qt::Window);
    j->showFullScreen();
}

void Ice::on_sosButton_clicked()
{
    QString hello[3];
    QFile file("c://bio.dat");
    //QFile file2("c://bio.txt");

    file.open(QIODevice::WriteOnly | QIODevice::Text);
    //file2.open(QIODevice::ReadWrite | QIODevice::Text);

    QTextStream out(&file);
    //QTextStream in(&file2);
    /*
    QMap<QString, QString>::iterator i = contacts.begin();
                 ui->nameLine->setText(i.key());
                 ui->addressText->setText(i.value());
    */

    //out.flush();

    out << "This is the icey output file generated with QT";
    file.close();

    file.open(QIODevice::ReadOnly | QIODevice::Text);

    out >> hello[1] >> hello[2];

    file.close();
    //file2.close();
    file.deleteLater();
    //file2.deleteLater();file.remove();

    QMessageBox::information(this, "iotry", hello[2]);

    //ui->scrollArea->grabGesture(Qt::SwipeGesture,Qt::ReceivePartialGestures);


}

void Ice::on_iceContactButton_clicked()
{
    Contacts *c = new Contacts();
    c->showFullScreen();
    this->close();
}

void Ice::on_allergyButton_clicked()
{
    //using public variable state to determine which form will be opened when eat of the forms
    //are clicked
    //QMessageBox::information(this, "return", this->state);
    if (this->state == "")
    {
        Allergies *a = new Allergies();
        a->showFullScreen();
        this->close();
    }
    else  //(this->state == "config")
    {

    }
}

void Ice::on_medicalConditionButton_clicked()
{
    if (this->state == "")
    {
        Conditions *c = new Conditions();
        c->showFullScreen();
        this->close();
    }
    else
    {

    }
}

void Ice::on_medicationButton_clicked()
{
    if (this->state == "")
    {
        Medications *m = new Medications();
        m->showFullScreen();
        this->close();
    }
    else
    {
    }
}

void Ice::loadBio()
{
    QString bio[6];
    QFile file("c://bio.dat");
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

    ui->nameLabel->setText(defaultText(bio[0],"Undefined", "Name: ", ""));
    ui->ageLabel->setText(defaultText(bio[1],"Undefined", "Age: ", "Years"));
    ui->bloodTypeLabel->setText(defaultText(bio[2], "Undefined", "Blood Group: ", ""));
    ui->insuranceProvider->setText(defaultText(bio[3],"Undefined", "Provider: \n", ""));
    ui->insuranceID->setText(defaultText(bio[4],"Undefined","Insurance ID: \n", ""));

    file.close();
    file.deleteLater();
}


QString Ice::defaultText(QString realString, QString defText, QString preText, QString appText)
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

void Ice::hideBioButton()
{
    if (this->state == "")
    {
        ui->bioEditButton->hide();
    }
    else
    {
        ui->bioEditButton->show();
    }
}

void Ice::on_bioEditButton_clicked()
{

}
