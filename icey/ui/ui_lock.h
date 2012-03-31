/********************************************************************************
** Form generated from reading UI file 'lock.ui'
**
** Created: Fri 18. Nov 12:42:37 2011
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOCK_H
#define UI_LOCK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lock
{
public:
    QGridLayout *gridLayout;
    QPushButton *iceButton;
    QSpacerItem *iceButtonSpacer;

    void setupUi(QWidget *Lock)
    {
        if (Lock->objectName().isEmpty())
            Lock->setObjectName(QString::fromUtf8("Lock"));
        Lock->resize(360, 640);
        gridLayout = new QGridLayout(Lock);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        iceButton = new QPushButton(Lock);
        iceButton->setObjectName(QString::fromUtf8("iceButton"));
        iceButton->setMinimumSize(QSize(0, 70));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        iceButton->setFont(font);
        iceButton->setAutoFillBackground(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icons/icon/alert.png"), QSize(), QIcon::Normal, QIcon::Off);
        iceButton->setIcon(icon);

        gridLayout->addWidget(iceButton, 1, 0, 1, 1);

        iceButtonSpacer = new QSpacerItem(20, 543, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(iceButtonSpacer, 0, 0, 1, 1);


        retranslateUi(Lock);

        QMetaObject::connectSlotsByName(Lock);
    } // setupUi

    void retranslateUi(QWidget *Lock)
    {
        Lock->setWindowTitle(QApplication::translate("Lock", "Lock", 0, QApplication::UnicodeUTF8));
        iceButton->setText(QApplication::translate("Lock", "Medical Information", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Lock: public Ui_Lock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOCK_H
