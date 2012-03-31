/********************************************************************************
** Form generated from reading UI file 'newcontactdialog.ui'
**
** Created: Wed 23. Nov 20:01:38 2011
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCONTACTDIALOG_H
#define UI_NEWCONTACTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newContactDialog
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *okButton;
    QPushButton *backButton;
    QWidget *widget_2;
    QGridLayout *gridLayout_6;
    QWidget *widget_3;
    QGridLayout *gridLayout_5;
    QLabel *label;
    QLineEdit *nameLine;
    QWidget *widget_4;
    QGridLayout *gridLayout_4;
    QLabel *label_4;
    QLineEdit *relationshipLine;
    QWidget *widget_5;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QLineEdit *numberLine;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *newContactDialog)
    {
        if (newContactDialog->objectName().isEmpty())
            newContactDialog->setObjectName(QString::fromUtf8("newContactDialog"));
        newContactDialog->resize(360, 351);
        gridLayout_2 = new QGridLayout(newContactDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        widget = new QWidget(newContactDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMaximumSize(QSize(16777215, 50));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        okButton = new QPushButton(widget);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(okButton->sizePolicy().hasHeightForWidth());
        okButton->setSizePolicy(sizePolicy1);
        okButton->setMinimumSize(QSize(0, 40));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        okButton->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icons/icon/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        okButton->setIcon(icon);

        gridLayout->addWidget(okButton, 0, 0, 1, 1);

        backButton = new QPushButton(widget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        sizePolicy1.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
        backButton->setSizePolicy(sizePolicy1);
        backButton->setMinimumSize(QSize(0, 40));
        backButton->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/icons/icon/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        backButton->setIcon(icon1);

        gridLayout->addWidget(backButton, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget, 2, 0, 1, 1);

        widget_2 = new QWidget(newContactDialog);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_6 = new QGridLayout(widget_2);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        gridLayout_5 = new QGridLayout(widget_3);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label = new QLabel(widget_3);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(10);
        label->setFont(font1);

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        nameLine = new QLineEdit(widget_3);
        nameLine->setObjectName(QString::fromUtf8("nameLine"));
        nameLine->setFont(font1);

        gridLayout_5->addWidget(nameLine, 1, 0, 1, 1);


        gridLayout_6->addWidget(widget_3, 0, 0, 1, 1);

        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        gridLayout_4 = new QGridLayout(widget_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        gridLayout_4->addWidget(label_4, 0, 0, 1, 1);

        relationshipLine = new QLineEdit(widget_4);
        relationshipLine->setObjectName(QString::fromUtf8("relationshipLine"));
        relationshipLine->setFont(font1);

        gridLayout_4->addWidget(relationshipLine, 1, 0, 1, 1);


        gridLayout_6->addWidget(widget_4, 1, 0, 1, 1);

        widget_5 = new QWidget(widget_2);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        gridLayout_3 = new QGridLayout(widget_5);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_5 = new QLabel(widget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        numberLine = new QLineEdit(widget_5);
        numberLine->setObjectName(QString::fromUtf8("numberLine"));
        numberLine->setFont(font1);
        numberLine->setInputMethodHints(Qt::ImhDigitsOnly);

        gridLayout_3->addWidget(numberLine, 1, 0, 1, 1);


        gridLayout_6->addWidget(widget_5, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 77, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer, 3, 0, 1, 1);


        gridLayout_2->addWidget(widget_2, 1, 0, 1, 1);


        retranslateUi(newContactDialog);

        QMetaObject::connectSlotsByName(newContactDialog);
    } // setupUi

    void retranslateUi(QDialog *newContactDialog)
    {
        newContactDialog->setWindowTitle(QApplication::translate("newContactDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("newContactDialog", "Ok", 0, QApplication::UnicodeUTF8));
        backButton->setText(QApplication::translate("newContactDialog", "Back", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("newContactDialog", "Contact Name", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("newContactDialog", "Contact Relationship", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("newContactDialog", "Contact Number", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class newContactDialog: public Ui_newContactDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCONTACTDIALOG_H
