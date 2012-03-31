#include "insuranceconfig.h"
#include "ui_insuranceconfig.h"

#include <QMessageBox>
#include <QFile>
#include <QDir>
#include <QTextStream>

InsuranceConfig::InsuranceConfig(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InsuranceConfig)
{
    ui->setupUi(this);
}

InsuranceConfig::~InsuranceConfig()
{
    delete ui;
}

void InsuranceConfig::on_optionButton_clicked()
{
    this->createActions();
}

void InsuranceConfig::createActions()
{
    qm = new QMenu(this);

    aboutaction = new QAction("About", this);
    connect(aboutaction, SIGNAL(triggered()), this, SLOT(AboutApp()));

    exitaction = new QAction("Exit", this);
    connect(exitaction, SIGNAL(triggered()),this, SLOT(ExitApp()));

    saveaction = new QAction("Save", this);
    connect(saveaction, SIGNAL(triggered()),this, SLOT(saveInsurance()));

    qm->addAction(saveaction);
    qm->addAction(aboutaction);
    qm->addAction(exitaction);

    ui->optionButton->setMenu(qm);

}

void InsuranceConfig::ExitApp()
{
    exit(0);
}
void InsuranceConfig::AboutApp()
{
    QMessageBox::about(this,"About Icey", "Icey is an application that allows access to emergency medical and contact information. more details at http://www.ifewalter.com");
}

void InsuranceConfig::on_cancelButton_clicked()
{
    this->close();
}


QString InsuranceConfig::defaultText(QString realString, QString defText, QString preText, QString appText)
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

void InsuranceConfig::loadInsurance()
{

#ifdef Q_OS_LINUX
    // NOTE: We have to store database file into user home folder in Linux
    QString path(QDir::home().path());
    path.append(QDir::separator()).append("icey_insurance.dat");
    path = QDir::toNativeSeparators(path);
    QFile file(path);
#else
    // NOTE: File exists in the application private folder, in Symbian Qt implementation
    QFile file("icey_insurance.dat");
#endif

    QString insuranceValue[6];

    QTextStream out(&file);
    file.open(QIODevice::ReadOnly | QIODevice::Text );
    for (int i=0;i<7;i++)
    {
        if (!out.atEnd())
        {
            insuranceValue[i] = out.readLine();
        }
        else
        {
            break;
        }
    }

    ui->providerText->setText(defaultText(insuranceValue[0],"Undefined", "", ""));
    ui->insuranceNumberText->setText(defaultText(insuranceValue[1],"Undefined","", ""));

    file.close();
    file.deleteLater();
}

void InsuranceConfig::saveInsurance()
{

#ifdef Q_OS_LINUX
    // NOTE: We have to store database file into user home folder in Linux
    QString path(QDir::home().path());
    path.append(QDir::separator()).append("icey_insurance.dat");
    path = QDir::toNativeSeparators(path);
    QFile file(path);
#else
    // NOTE: File exists in the application private folder, in Symbian Qt implementation
    QFile file("icey_insurance.dat");
#endif




    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&file);

    QString tempString;

    tempString = ui->providerText->text().remove(" ", Qt::CaseInsensitive);

    if (tempString != "")
    {
        out << ui->providerText->text() << "\n" << ui->insuranceNumberText->text();
        QMessageBox::information(this,"save Alert", "Information Saved");
    }
    else
    {
        QMessageBox::information(this, "Input Error", "Please give your insurance provider");
    }

    file.close();
    file.deleteLater();



}
