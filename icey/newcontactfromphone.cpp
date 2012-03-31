#include "newcontactfromphone.h"
#include "ui_newcontactfromphone.h"

NewContactFromPhone::NewContactFromPhone(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewContactFromPhone)
{
    ui->setupUi(this);
}

NewContactFromPhone::~NewContactFromPhone()
{
    delete ui;
}
