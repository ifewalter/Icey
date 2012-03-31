#include "allergies.h"
#include "ui_allergies.h"
#include <QMessageBox>
#include <QKeyEvent>
#include <QFile>
#include <QTextStream>
#include <QAction>
#include <QDir>

Allergies::Allergies(QWidget *parent) :
        QWidget(parent),
        ui(new Ui::Allergies)
{
    ui->setupUi(this);
    populateList();
    madeChanges = false;
    createActions();
    qs.enableKineticScrollFor(ui->listWidget);
}

void Allergies::populateList()
{
#ifdef Q_OS_LINUX
    // NOTE: We have to store database file into user home folder in Linux
    QString path(QDir::home().path());
    path.append(QDir::separator()).append("allergy.dat");
    path = QDir::toNativeSeparators(path);
    QFile file(path);
    #else
    // NOTE: File exists in the application private folder, in Symbian Qt implementation
    QFile file("allergy.dat");
    #endif


    QTextStream out(&file);
    file.open(QIODevice::ReadOnly | QIODevice::Text );
    for (int i=0;i<101;i++)
    {
        if (!out.atEnd())
        {
            allergy[i] = out.readLine();
            ui->listWidget->addItem(allergy[i]);
        }
        else
        {
            break;
        }
    }

    file.close();
    file.deleteLater();
}

Allergies::~Allergies()
{
    delete ui;
    delete addaction;
    delete deleteaction;
    delete editaction;
    delete qm;
}

void Allergies::on_backButton_clicked()
{
    this->close();
}

void Allergies::on_listWidget_itemClicked(QListWidgetItem* item)
{
    QString nullvalue = "";

    if (state == "edit")
    {
        bool ok;

        QString text = QInputDialog::getText(this,tr("Rename Allergy"),"Rename Allergy",QLineEdit::Normal,item->text(),&ok);



        if (ok && !text.isEmpty())
        {
            madeChanges = true;
            int currentItem = 0;
            currentItem += ui->listWidget->count();
            allergy[currentItem] = text;
            saveAll();
            ui->listWidget->clear();
            populateList();
        }


    }
    else
    {
        QString tempcont;
        tempcont = "Delete ";
        tempcont.append(item->text());
        tempcont.append(" from allergy list");

        int r = QMessageBox::question(this, tr("Information/UNlock"),
                                      tempcont,
                                      QMessageBox::Yes | QMessageBox::No
                                      );
        if (r == QMessageBox::Yes)
        {
            int currentItem =0;
            currentItem = ui->listWidget->currentRow();
            allergy[currentItem] = nullvalue;

            ui->listWidget->clear();
            saveAll();

            populateList();
        }
        else if (r == QMessageBox::No)
        {

        }
    }
}

void Allergies::createActions()
{
    addaction = new QAction("Add Allergies", this);
    connect(addaction, SIGNAL(triggered()), this, SLOT(addAllergy()));

    editaction = new QAction("Edit Allergies", this);
    connect(editaction, SIGNAL(triggered()),this, SLOT(editAllergy()));


    deleteaction = new QAction("Delete Allergies", this);
    connect(deleteaction, SIGNAL(triggered()),this,SLOT(deleteAllergy()));

    aboutapp = new QAction("About Icey", this);
    connect(aboutapp, SIGNAL(triggered()),this,SLOT(aboutApp()));

    exitapp = new QAction("Exit", this);
    connect(exitapp, SIGNAL(triggered()),this,SLOT(exitApp()));



    qm = new QMenu(this);
    qm->addAction(addaction);
    qm->addAction(editaction);
    qm->addAction(deleteaction);
    qm->addAction(aboutapp);
    qm->addAction(exitapp);

    ui->actionButton->setMenu(qm);
}

void Allergies::aboutApp()
{
    QMessageBox::about(this,"About Icey", "Icey is an application that allows access to emergency medical and contact information. more details at http://www.ifewalter.com");
}
void Allergies::exitApp()
{
    exit(0);
}

void Allergies::addAllergy()
{
    state = "add";
    bool ok;
    QString text = QInputDialog::getText(this,tr("Enter Allergy"),"Enter Allergy",QLineEdit::Normal,"",&ok);

#ifdef Q_OS_LINUX
    // NOTE: We have to store database file into user home folder in Linux
    QString path(QDir::home().path());
    path.append(QDir::separator()).append("allergy.dat");
    path = QDir::toNativeSeparators(path);
    QFile file(path);
    #else
    // NOTE: File exists in the application private folder, in Symbian Qt implementation
    QFile file("allergy.dat");
    #endif



    file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append);
    QTextStream out(&file);

    out << text << "\n";
    file.close();
    file.deleteLater();

    ui->listWidget->clear();
    populateList();
}
void Allergies::editAllergy()
{
    QMessageBox::information(this,"add alert", "Please select any allery on the list to edit");
    state = "edit";
}
void Allergies::deleteAllergy()
{
    QMessageBox::information(this,"add alert", "Please select any allery on the list to delete");
    state = "delete";
}

void Allergies::saveAll()
{
#ifdef Q_OS_LINUX
    // NOTE: We have to store database file into user home folder in Linux
    QString path(QDir::home().path());
    path.append(QDir::separator()).append("allergy.dat");
    path = QDir::toNativeSeparators(path);
    QFile file(path);
    #else
    // NOTE: File exists in the application private folder, in Symbian Qt implementation
    QFile file("allergy.dat");
    #endif



    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&file);

    for (int i = 0; i < 101;i++)
    {
        if (allergy[i] != "")
        {
            out << allergy[i] << "\n";
        }
    }
    file.close();
    file.deleteLater();
}

void Allergies::on_actionButton_clicked()
{

}
