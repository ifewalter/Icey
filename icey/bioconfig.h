#ifndef BIOCONFIG_H
#define BIOCONFIG_H

#include <QWidget>
#include <QMenu>

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>



namespace Ui {
class BioConfig;
}

class BioConfig : public QWidget
{
    Q_OBJECT

public:
    explicit BioConfig(QWidget *parent = 0);
    int insertParameter(QString parameter, QString value);
    int updateParameter(QString parameter, QString value);
    ~BioConfig();



private:
    Ui::BioConfig *ui;
    void saveBio();
    void loadBio();
    QString defaultText(QString realString, QString defText, QString preText, QString appText);
    QMenu *qm;
    void createActions();
    QAction *aboutaction;
    QAction *exitaction;
    QAction *saveaction;
    QSqlDatabase db;

private slots:
    void on_cancelButton_clicked();
    void AboutApp();
    void ExitApp();
    void SaveAction();
};

#endif // BIOCONFIG_H
