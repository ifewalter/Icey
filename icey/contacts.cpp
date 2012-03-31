#include "contacts.h"
#include "ui_contacts.h"
#include <QStringList>
#include <QList>
#include <QFile>
#include <QTextStream>
#include <QInputDialog>
#include <QMessageBox>
#include <QDialog>
#include <QTimer>
#include <QDir>

Contacts::Contacts(QWidget *parent) :
        QWidget(parent),
        ui(new Ui::Contacts)
{
    ui->setupUi(this);
    this->loadPhoneContacts();
    this->createActions();
    qs.enableKineticScrollFor(ui->listWidget);
}

Contacts::~Contacts()
{
    delete ui;
    delete qm;
}

void Contacts::on_backButton_clicked()
{
    this->close();
}

void Contacts::loadPhoneContacts()
{
    ui->listWidget->clear();

    QString tempConstructor;

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


    QTextStream out(&file);
    file.open(QIODevice::ReadOnly | QIODevice::Text );
    for (int i=0;i<101;i++)
    {
        if (!out.atEnd())
        {

            for (int j=0;j<3;j++)
            {

                if (!out.atEnd())
                {
                    contact[i][j] = out.readLine();

                }
                else
                {
                    break;
                }
            }
            tempConstructor = contact[i][0];
            tempConstructor = tempConstructor.append("\n");
            tempConstructor = tempConstructor.append(contact[i][1]);
            tempConstructor = tempConstructor.append("\t\n");
            tempConstructor = tempConstructor.append(contact[i][2]);

            ui->listWidget->addItem(tempConstructor);

        }
        else
        {
            break;
        }
    }
    file.close();
    file.deleteLater();

}

void Contacts::createActions()
{
    addaction = new QAction("Add Contact", this);
    connect(addaction, SIGNAL(triggered()), this, SLOT(addContact()));

    editaction = new QAction("Edit Contact", this);
    connect(editaction, SIGNAL(triggered()),this, SLOT(editContact()));


    deleteaction = new QAction("Delete Contact", this);
    connect(deleteaction, SIGNAL(triggered()),this,SLOT(deleteContact()));

    aboutaction = new QAction("About", this);
    connect(aboutaction, SIGNAL(triggered()), this, SLOT(aboutapp()));

    exitaction = new QAction("Exit", this);
    connect(exitaction, SIGNAL(triggered()),this, SLOT(exitapp()));


    qm = new QMenu(this);
    qm->addAction(addaction);
    qm->addAction(editaction);
    qm->addAction(deleteaction);
    qm->addAction(aboutaction);
    qm->addAction(exitaction);

    ui->actionButton->setMenu(qm);
}

void Contacts::addContact()
{

    int currentItem = 0;
    currentItem += ui->listWidget->count();

    ncd = new ncdnew();
    ncd->contactIndex = 3;
    ncd->showFullScreen();
    ui->listWidget->clear();
    this->saveAll();
    this->loadPhoneContacts();
    this->close();

}


void Contacts::editContact()
{
    QMessageBox::information(this,"add alert", "Please select a contact on the list to edit");
    state = "edit";


}

void Contacts::deleteContact()
{
    QMessageBox::information(this,"add alert", "Please select a contact on the list to delete");
    state = "delete";
}

void Contacts::saveAll()
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



    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&file);

    for (int i = 0; i<101;i++)
    {
        for (int j=0; j<3;j++)
        {
            if (contact[i][j] != "")
            {
                out << contact[i][j] << "\n";
            }
        }
    }
    file.close();
    file.deleteLater();
}


void Contacts::on_listWidget_itemClicked(QListWidgetItem* item)
{
    if (state == "edit")
    {
        QString text;
        int currentItem = 0;
        currentItem += ui->listWidget->currentRow();
        bool ok;

        text = QInputDialog::getText(this,tr("Enter contact"),"Enter contact name: ",QLineEdit::Normal,contact[currentItem][0],&ok);


        if (ok && !text.isEmpty())
        {
            madeChanges = true;
            contact[currentItem][0] = text;

            text = QInputDialog::getText(this,tr("Enter drug"),"Enter contact relationship: ",QLineEdit::Normal,contact[currentItem][1],&ok);

            if (ok && !text.isEmpty())
            {
                contact[currentItem][1] = text;



                text = QInputDialog::getText(this,tr("Enter drug"),"Enter contact phone number:",QLineEdit::Normal,contact[currentItem][2],&ok);

                if (ok && !text.isEmpty())
                {
                    contact[currentItem][2] = text;

                    this->saveAll();
                    ui->listWidget->clear();
                    this->loadPhoneContacts();
                }
            }
        }



    }
    else if (state == "delete")
    {
        int currentItem = 0;
        currentItem += ui->listWidget->currentRow();

        QString tempcont;
        tempcont = "Delete ";
        tempcont.append(contact[currentItem][0]);
        tempcont.append(" from contact list");

        int r = QMessageBox::question(this, tr("Information"),
                                      tempcont,
                                      QMessageBox::Yes | QMessageBox::No
                                      );

        if (r == QMessageBox::Yes)
        {
            contact[currentItem][0] = "";
            contact[currentItem][1] = "";
            contact[currentItem][2] = "";
            this->saveAll();

            this->loadPhoneContacts();
        }
        else if (r == QMessageBox::No)
        {

        }
    }


}

void Contacts::aboutapp()
{
    QMessageBox::about(this,"About Icey", "Icey is an application that allows access to emergency medical and contact information. more details at http://www.ifewalter.com");
}
void Contacts::exitapp()
{
    exit(0);
}

void Contacts::on_actionButton_clicked()
{

}
