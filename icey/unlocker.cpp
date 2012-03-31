#include "unlocker.h"
#include "ui_unlocker.h"
#include <QMessageBox>


Unlocker::Unlocker(QWidget *parent) :
        QWidget(parent),
        ui(new Ui::Unlocker)
{
    ui->setupUi(this);
}

Unlocker::~Unlocker()
{
    delete ui;
    delete c;
}

void Unlocker::on_exitButton_clicked()
{
    //j->showFullScreen();
    //this->destroy(true,false);
    //l->showFullScreen();
    this->close();

}


void Unlocker::on_clearButton_clicked()
{
    ui->passView->setText("");
    displayedText = "";
}

void Unlocker::on_button1_clicked()
{

    ui->passView->setText((ui->passView->displayText() + "1"));
    displayedText += "1";
    //ui->passView->setText("1");
}

void Unlocker::on_button2_clicked()
{

    ui->passView->setText((ui->passView->displayText() + "2"));
    displayedText += "2";
}

void Unlocker::on_button3_clicked()
{
    ui->passView->setText((ui->passView->displayText() + "3"));
    displayedText += "3";
}

void Unlocker::on_button4_clicked()
{
    ui->passView->setText((ui->passView->displayText() + "4"));
    displayedText += "4";
}

void Unlocker::on_button5_clicked()
{
    ui->passView->setText((ui->passView->displayText() + "5"));
    displayedText += "5";
}

void Unlocker::on_button6_clicked()
{
    ui->passView->setText((ui->passView->displayText() + "6"));
    displayedText += "6";
}

void Unlocker::on_button7_clicked()
{
    ui->passView->setText((ui->passView->displayText() + "7"));
    displayedText += "7";
}

void Unlocker::on_button8_clicked()
{
    ui->passView->setText((ui->passView->displayText() + "8"));
    displayedText += "8";
}

void Unlocker::on_button9_clicked()
{
    ui->passView->setText((ui->passView->displayText() + "9"));
    displayedText += "9";
}

void Unlocker::on_button0_clicked()
{
    ui->passView->setText((ui->passView->displayText() + "0"));
    displayedText += "0";
}

void Unlocker::on_sosButton_clicked()
{
    QSettings settings;
    QString nlc = settings.value("unlockcode").toString();

    if (nlc == "")
    {
        nlc == "0000";
    }
    else
    {
        nlc = nlc;
    }

    if (displayedText == nlc)
    {

        c = new Configure();
        c->showFullScreen();
        this->close();


    }


    else
    {
        QMessageBox::critical(this,"Unlock Error", "Invalid Unlock Code");

        ui->passView->clear();
        displayedText = ""        ;

    }
}
