/********************************************************************************
** Form generated from reading UI file 'contacts.ui'
**
** Created: Wed 23. Nov 20:01:37 2011
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACTS_H
#define UI_CONTACTS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Contacts
{
public:
    QGridLayout *gridLayout_4;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QListWidget *listWidget;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QPushButton *actionButton;
    QPushButton *backButton;
    QLabel *label;

    void setupUi(QWidget *Contacts)
    {
        if (Contacts->objectName().isEmpty())
            Contacts->setObjectName(QString::fromUtf8("Contacts"));
        Contacts->resize(360, 640);
        gridLayout_4 = new QGridLayout(Contacts);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        widget = new QWidget(Contacts);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        listWidget = new QListWidget(widget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QFont font;
        font.setPointSize(12);
        listWidget->setFont(font);

        gridLayout_2->addWidget(listWidget, 0, 0, 1, 1);


        gridLayout_4->addWidget(widget, 1, 0, 1, 1);

        widget_2 = new QWidget(Contacts);
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
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        actionButton->setFont(font1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icons/icon/options.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionButton->setIcon(icon);
        actionButton->setFlat(false);

        gridLayout->addWidget(actionButton, 1, 0, 1, 1);

        backButton = new QPushButton(widget_2);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setMinimumSize(QSize(0, 40));
        backButton->setFont(font1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/icons/icon/prev.png"), QSize(), QIcon::Normal, QIcon::Off);
        backButton->setIcon(icon1);

        gridLayout->addWidget(backButton, 1, 1, 1, 1);


        gridLayout_4->addWidget(widget_2, 2, 0, 1, 1);

        label = new QLabel(Contacts);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);

        gridLayout_4->addWidget(label, 0, 0, 1, 1);


        retranslateUi(Contacts);

        QMetaObject::connectSlotsByName(Contacts);
    } // setupUi

    void retranslateUi(QWidget *Contacts)
    {
        Contacts->setWindowTitle(QApplication::translate("Contacts", "Form", 0, QApplication::UnicodeUTF8));
        actionButton->setText(QApplication::translate("Contacts", "Options", 0, QApplication::UnicodeUTF8));
        backButton->setText(QApplication::translate("Contacts", "Back", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Contacts", "Emergency Contacts", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Contacts: public Ui_Contacts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACTS_H
