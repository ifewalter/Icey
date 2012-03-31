#ifndef CONTACTS_H
#define CONTACTS_H
#include <QWidget>
#include <QMenu>
#include <QMessageBox>
#include <QInputDialog>
#include <QListWidgetItem>
#include <QsKineticScroller.h>
#include <newcontactdialog.h>
#include <QThread>

/*
class newcd : public QThread
{
    Q_OBJECT
public:
    newcd();
protected:
    void run();
signals:
    void done(bool &results);
private slots:
    void doTheWork();
};
*/
class ncdnew : public newContactDialog
{
    Q_OBJECT
};

namespace Ui {
    class Contacts;
}

class Contacts : public QWidget
{
    Q_OBJECT

public:
    explicit Contacts(QWidget *parent = 0);
    ~Contacts();

    QString contact[101][3];
    QString state;
    bool madeChanges;
    //void loadPhoneContacts();
    QAction *addaction;
    QAction *editaction;
    QAction *exitaction;
    QAction *aboutaction;


    Ui::Contacts *ui;
    QAction *deleteaction;

private:
    QThread nd, nd2;
    //newContactDialog *ncd;
    void populateList();
    void createActions();
    void saveAll();
    QMenu *qm;
    QsKineticScroller qs;
    ncdnew *ncd;
    //void showncd();

private slots:
    void on_actionButton_clicked();
    void on_listWidget_itemClicked(QListWidgetItem* item);
    void on_backButton_clicked();
    void addContact();
    void deleteContact();
    void loadPhoneContacts();
    void editContact();
    void aboutapp();
    void exitapp();

};

#endif // CONTACTS_H
