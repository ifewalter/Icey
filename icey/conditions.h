#ifndef CONDITIONS_H
#define CONDITIONS_H

#include <QWidget>
#include <QMenu>
#include <QMessageBox>
#include <QInputDialog>
#include <QListWidgetItem>
#include <QsKineticScroller.h>

namespace Ui {
    class Conditions;
}

class Conditions : public QWidget
{
    Q_OBJECT

public:
    explicit Conditions(QWidget *parent = 0);
    ~Conditions();
    QString condition[100];
    QAction *aboutaction;
    QAction *exitaction;
    QAction *addaction;
    QAction *editaction;
    QAction *deleteaction;

private:
    Ui::Conditions *ui;
    void loadConditions();
    void populateList();
    void createActions();
    void saveAll();
    QMenu *qm;
    QString cstate;
    QsKineticScroller qs;

private slots:
    //void on_listWidget_itemClicked(QListWidgetItem* item);
    //void on_listWidget_clicked(QModelIndex index);
    void on_listWidget_itemClicked(QListWidgetItem* item);
    void on_actionButton_clicked();
    void on_backButton_clicked();
    void addCondition();
    void deleteCondition();
    void editCondition();
    void AboutApp();
    void ExitApp();
};

#endif // CONDITIONS_H
