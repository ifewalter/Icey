/********************************************************************************
** Form generated from reading UI file 'newcontactfromphone.ui'
**
** Created: Wed 23. Nov 20:01:39 2011
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCONTACTFROMPHONE_H
#define UI_NEWCONTACTFROMPHONE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewContactFromPhone
{
public:
    QGridLayout *gridLayout_3;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QListWidget *listWidget;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QPushButton *actionButton;
    QPushButton *backButton;

    void setupUi(QDialog *NewContactFromPhone)
    {
        if (NewContactFromPhone->objectName().isEmpty())
            NewContactFromPhone->setObjectName(QString::fromUtf8("NewContactFromPhone"));
        NewContactFromPhone->resize(360, 640);
        gridLayout_3 = new QGridLayout(NewContactFromPhone);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        widget = new QWidget(NewContactFromPhone);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        listWidget = new QListWidget(widget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout_2->addWidget(listWidget, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget, 0, 0, 1, 1);

        widget_2 = new QWidget(NewContactFromPhone);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setSpacing(1);
        gridLayout->setContentsMargins(1, 1, 1, 1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(verticalSpacer, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        actionButton = new QPushButton(widget_2);
        actionButton->setObjectName(QString::fromUtf8("actionButton"));
        actionButton->setMinimumSize(QSize(0, 40));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        actionButton->setFont(font);
        actionButton->setFlat(false);

        gridLayout->addWidget(actionButton, 1, 0, 1, 1);

        backButton = new QPushButton(widget_2);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setMinimumSize(QSize(0, 40));
        backButton->setFont(font);

        gridLayout->addWidget(backButton, 1, 1, 1, 1);


        gridLayout_3->addWidget(widget_2, 1, 0, 1, 1);


        retranslateUi(NewContactFromPhone);

        QMetaObject::connectSlotsByName(NewContactFromPhone);
    } // setupUi

    void retranslateUi(QDialog *NewContactFromPhone)
    {
        NewContactFromPhone->setWindowTitle(QApplication::translate("NewContactFromPhone", "Dialog", 0, QApplication::UnicodeUTF8));
        actionButton->setText(QApplication::translate("NewContactFromPhone", "Options", 0, QApplication::UnicodeUTF8));
        backButton->setText(QApplication::translate("NewContactFromPhone", "Back", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NewContactFromPhone: public Ui_NewContactFromPhone {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCONTACTFROMPHONE_H
