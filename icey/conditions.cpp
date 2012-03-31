#include "conditions.h"
#include "ui_conditions.h"
#include <QFile>
#include <QTextStream>
#include <QCloseEvent>
#include <QDir>
#include <QMenu>

Conditions::Conditions(QWidget *parent) :
        QWidget(parent),
        ui(new Ui::Conditions)
{
    ui->setupUi(this);
    loadConditions();
    createActions();
    qs.enableKineticScrollFor(ui->listWidget);
}

Conditions::~Conditions()
{
    delete ui;
    delete addaction;
    delete deleteaction;
    delete editaction;
    delete qm;

}

void Conditions::on_backButton_clicked()
{
    //returns to the ice form
    //i = new Information();
    //i->showFullScreen();
    this->close();
}

void Conditions::on_actionButton_clicked()
{
    //trying to work with context menus for the action button

    //QMenu *menu = new QMenu(ui->actionButton);


}

void Conditions::loadConditions()
{

#ifdef Q_OS_LINUX
    // NOTE: We have to store database file into user home folder in Linux
    QString path(QDir::home().path());
    path.append(QDir::separator()).append("conditions.dat");
    path = QDir::toNativeSeparators(path);
    QFile file(path);
    #else
    // NOTE: File exists in the application private folder, in Symbian Qt implementation
    QFile file("conditions.dat");
    #endif


    QTextStream out(&file);
    file.open(QIODevice::ReadOnly | QIODevice::Text );
    for (int i=0;i<101;i++)
    {
        if (!out.atEnd())
        {
            condition[i] = out.readLine();
            ui->listWidget->addItem(condition[i]);
        }
        else
        {
            break;
        }
    }
    file.close();
    file.deleteLater();
}

void Conditions::createActions()
{
    addaction = new QAction("Add Conditions", this);
    connect(addaction, SIGNAL(triggered()), this, SLOT(addCondition()));

    editaction = new QAction("Edit Conditions", this);
    connect(editaction, SIGNAL(triggered()),this, SLOT(editCondition()));


    deleteaction = new QAction("Delete Conditions", this);
    connect(deleteaction, SIGNAL(triggered()),this,SLOT(deleteCondition()));

    aboutaction = new QAction("About", this);
    connect(aboutaction, SIGNAL(triggered()), this, SLOT(AboutApp()));

    exitaction = new QAction("Exit", this);
    connect(exitaction, SIGNAL(triggered()),this, SLOT(ExitApp()));

    qm = new QMenu(this);
    qm->addAction(addaction);
    qm->addAction(editaction);
    qm->addAction(deleteaction);
    qm->addAction(aboutaction);
    qm->addAction(exitaction);


    ui->actionButton->setMenu(qm);
}

void Conditions::ExitApp()
{
    exit(0);
}
void Conditions::AboutApp()
{
    QMessageBox::about(this,"About Icey", "Icey is an application that allows access to emergency medical and contact information. more details at http://www.ifewalter.com");
}

void Conditions::addCondition()
{

    bool ok;

    QString text = QInputDialog::getText(this,tr("Enter Condition"),"Enter Condition",QLineEdit::Normal,"",&ok);

#ifdef Q_OS_LINUX
    // NOTE: We have to store database file into user home folder in Linux
    QString path(QDir::home().path());
    path.append(QDir::separator()).append("conditions.dat");
    path = QDir::toNativeSeparators(path);
    QFile file(path);
    #else
    // NOTE: File exists in the application private folder, in Symbian Qt implementation
    QFile file("conditions.dat");
    #endif



    QTextStream out(&file);
    file.open(QIODevice::ReadOnly | QIODevice::Text | QIODevice::Append);

    out << text << "\n";

    file.close();
    file.deleteLater();
    ui->listWidget->clear();
    loadConditions();

}
void Conditions::editCondition()
{
    QMessageBox::information(this,"add alert", "Please select any condition on the list to edit");
    cstate = "edit";
}
void Conditions::deleteCondition()
{
    QMessageBox::information(this,"add alert", "Please select any condition on the list to delete");
    cstate = "delete";
}

void Conditions::saveAll()
{
#ifdef Q_OS_LINUX
    // NOTE: We have to store database file into user home folder in Linux
    QString path(QDir::home().path());
    path.append(QDir::separator()).append("conditions.dat");
    path = QDir::toNativeSeparators(path);
    QFile file(path);
    #else
    // NOTE: File exists in the application private folder, in Symbian Qt implementation
    QFile file("conditions.dat");
    #endif




    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&file);

    for (int i = 0; i < 101;i++)
    {
        if (condition[i] != "")
        {
            out << condition[i] << "\n";
        }
    }
    file.close();
    file.deleteLater();
}

void Conditions::on_listWidget_itemClicked(QListWidgetItem* item)
{

    if (cstate == "edit")
    {
        bool ok;

        QString text = QInputDialog::getText(this,tr("Rename Condition"),"Enter Condition",QLineEdit::Normal,item->text(),&ok);



        if (ok && !text.isEmpty())
        {
            int currentItem =0 ;
            currentItem += ui->listWidget->count();
            condition[currentItem] = text;
            saveAll();
            ui->listWidget->clear();
            loadConditions();
        }


    }
    if (cstate == "delete")
    {
        int currentItem =0;
        QString cstates;
        currentItem = ui->listWidget->currentRow();
        QString tempcont;
        tempcont = "Delete ";
        tempcont.append(item->text());
        tempcont.append(" from conditions list");

        int r = QMessageBox::question(this, tr("Information/UNlock"),
                                      tempcont,
                                      QMessageBox::Yes | QMessageBox::No
                                      );
        if (r == QMessageBox::Yes)
        {

            condition[currentItem] = cstates;
            ui->listWidget->clear();
            saveAll();

            loadConditions();
        }
        else if (r == QMessageBox::No)
        {

        }
    }
}
