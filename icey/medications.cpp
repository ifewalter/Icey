#include "medications.h"
#include "ui_medications.h"
#include <QFile>
#include <QTextStream>
#include <QDir>


Medications::Medications(QWidget *parent) :
        QWidget(parent),
        ui(new Ui::Medications)
{
    ui->setupUi(this);
    loadMedications();
    createActions();
    qs.enableKineticScrollFor(ui->listWidget);


}

Medications::~Medications()
{
    delete ui;
    delete addaction;
    delete deleteaction;
    delete editaction;
    delete qm;
}

void Medications::on_backButton_clicked()
{
    //i = new Information();
    //i->showFullScreen();
    this->close();
}

void Medications::on_actionButton_clicked()
{

}

void Medications::loadMedications()
{
    QString tempConstructor;

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
                    medication[i][j] = out.readLine();

                }
                else
                {
                    break;
                }
            }

            tempConstructor = medication[i][0];
            tempConstructor = tempConstructor.append("\n");
            tempConstructor = tempConstructor.append(medication[i][1]);
            tempConstructor = tempConstructor.append("\t\n");
            tempConstructor = tempConstructor.append(medication[i][2]);

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
void Medications::createActions()
{
    addaction = new QAction("Add Medications", this);
    connect(addaction, SIGNAL(triggered()), this, SLOT(addMedication()));

    editaction = new QAction("Edit Medications", this);
    connect(editaction, SIGNAL(triggered()),this, SLOT(editMedication()));


    deleteaction = new QAction("Delete Medications", this);
    connect(deleteaction, SIGNAL(triggered()),this,SLOT(deleteMedication()));

    aboutapp = new QAction("About Icey", this);
    connect(aboutapp, SIGNAL(triggered()),this,SLOT(AboutApp()));

    exitapp = new QAction("Exit", this);
    connect(exitapp, SIGNAL(triggered()),this,SLOT(ExitApp()));



    qm = new QMenu(this);
    qm->addAction(addaction);
    qm->addAction(editaction);
    qm->addAction(deleteaction);
    qm->addAction(aboutapp);
    qm->addAction(exitapp);

    ui->actionButton->setMenu(qm);
}

void Medications::addMedication()
{
    int currentItem = 0;
    currentItem += ui->listWidget->count();
    bool ok;
    QString text;
    /*
    text = QInputDialog::getText(this,tr("Enter drug"),"Enter drug name: ",QLineEdit::Normal,"",&ok);


    if (ok && !text.isEmpty())
    {
        medication[currentItem][0] = text;


        text = QInputDialog::getText(this,tr("Enter drug"),"Enter drug volume: ",QLineEdit::Normal,"",&ok);

            if (ok && !text.isEmpty())
            {
                medication[currentItem][1] = text;


                text = QInputDialog::getText(this,tr("Enter drug"),"Enter dosage: ",QLineEdit::Normal,"",&ok);

                if (ok && !text.isEmpty())
                {
                    medication[currentItem][2] = text;

                    ui->listWidget->clear();
                    saveAll();
                    loadMedications();
                }
            }
    }

*/
    newMedicationDialog *nmd = new newMedicationDialog();

    nmd->showFullScreen();
    this->close();

}


void Medications::editMedication()
{
    QMessageBox::information(this,"add alert", "Please select a medication on the list to edit");
    state = "edit";
}
void Medications::deleteMedication()
{
    QMessageBox::information(this,"add alert", "Please select a medication on the list to delete");
    state = "delete";
}

void Medications::saveAll()
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



    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&file);

    for (int i = 0; i<101;i++)
    {
        for (int j=0; j<3;j++)
        {
            if (medication[i][j] != "")
            {
                out << medication[i][j] << "\n";
            }
        }
    }
    file.close();
    file.deleteLater();
}

void Medications::on_listWidget_itemClicked(QListWidgetItem* item)
{
    int currentItem = 0;
    currentItem += ui->listWidget->currentRow();

    if (state == "edit")
    {
        QString text;

        bool ok;

        text = QInputDialog::getText(this,tr("Enter drug"),"Enter drug name: ",QLineEdit::Normal,medication[currentItem][0],&ok);


        if (ok && !text.isEmpty())
        {
            madeChanges = true;
            medication[currentItem][0] = text;
            //saveAll();
            //ui->listWidget->clear();
            //loadMedications();


            text = QInputDialog::getText(this,tr("Enter drug"),"Enter drug volume: ",QLineEdit::Normal,medication[currentItem][1],&ok);

            if (ok && !text.isEmpty())
            {
                medication[currentItem][1] = text;



                text = QInputDialog::getText(this,tr("Enter drug"),"Enter dosage: ",QLineEdit::Normal,medication[currentItem][2],&ok);

                if (ok && !text.isEmpty())
                {
                    medication[currentItem][2] = text;

                    saveAll();
                    ui->listWidget->clear();
                    loadMedications();
                }
            }
        }


    }
    else if (state == "delete")
    {
        int currentItem =0;
        currentItem += ui->listWidget->currentRow();

        QString tempcont;
        tempcont = "Delete ";
        tempcont.append(medication[currentItem][0]);
        tempcont.append(" from medication list");

        int r = QMessageBox::question(this, tr("Information/UNlock"),
                                      tempcont,
                                      QMessageBox::Yes | QMessageBox::No
                                      );
        if (r == QMessageBox::Yes)
        {
            //int currentItem =0;
            //currentItem += ui->listWidget->currentRow();
            medication[currentItem][0] = "";
            medication[currentItem][1] = "";
            medication[currentItem][2] = "";
            ui->listWidget->clear();

            this->saveAll();
            this->loadMedications();
        }
        else if (r == QMessageBox::No)
        {

        }
    }
}

void Medications::ExitApp()
{
    exit(0);
}
void Medications::AboutApp()
{
    QMessageBox::about(this,"About Icey", "Icey is an application that allows access to emergency medical and contact information. more details at http://www.ifewalter.com");
}
