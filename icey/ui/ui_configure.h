/********************************************************************************
** Form generated from reading UI file 'configure.ui'
**
** Created: Sat 26. Nov 17:23:41 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_H
#define UI_CONFIGURE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Configure
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_4;
    QPushButton *bioconfigButton;
    QPushButton *contactconfigButton;
    QPushButton *allergyconfigButton;
    QPushButton *conditionconfigButton;
    QPushButton *medicationconfigButton;
    QPushButton *appsettingsconfigButton;
    QSpacerItem *verticalSpacer;
    QPushButton *insuranceconfigButton;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QPushButton *optionsButton;
    QPushButton *exitButton;

    void setupUi(QWidget *Configure)
    {
        if (Configure->objectName().isEmpty())
            Configure->setObjectName(QString::fromUtf8("Configure"));
        Configure->resize(360, 640);
        gridLayout_2 = new QGridLayout(Configure);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        widget = new QWidget(Configure);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        scrollArea = new QScrollArea(widget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 322, 546));
        gridLayout_4 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        bioconfigButton = new QPushButton(scrollAreaWidgetContents);
        bioconfigButton->setObjectName(QString::fromUtf8("bioconfigButton"));
        bioconfigButton->setMinimumSize(QSize(0, 60));
        QFont font;
        font.setPointSize(10);
        bioconfigButton->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icons/icon/bioconfig.png"), QSize(), QIcon::Normal, QIcon::Off);
        bioconfigButton->setIcon(icon);

        gridLayout_4->addWidget(bioconfigButton, 0, 0, 1, 1);

        contactconfigButton = new QPushButton(scrollAreaWidgetContents);
        contactconfigButton->setObjectName(QString::fromUtf8("contactconfigButton"));
        contactconfigButton->setMinimumSize(QSize(0, 60));
        contactconfigButton->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/icons/icon/contact1.png"), QSize(), QIcon::Normal, QIcon::Off);
        contactconfigButton->setIcon(icon1);

        gridLayout_4->addWidget(contactconfigButton, 2, 0, 1, 1);

        allergyconfigButton = new QPushButton(scrollAreaWidgetContents);
        allergyconfigButton->setObjectName(QString::fromUtf8("allergyconfigButton"));
        allergyconfigButton->setMinimumSize(QSize(0, 60));
        allergyconfigButton->setFont(font);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/icons/icon/settings3.png"), QSize(), QIcon::Normal, QIcon::Off);
        allergyconfigButton->setIcon(icon2);

        gridLayout_4->addWidget(allergyconfigButton, 3, 0, 1, 1);

        conditionconfigButton = new QPushButton(scrollAreaWidgetContents);
        conditionconfigButton->setObjectName(QString::fromUtf8("conditionconfigButton"));
        conditionconfigButton->setMinimumSize(QSize(0, 60));
        conditionconfigButton->setFont(font);
        conditionconfigButton->setIcon(icon2);

        gridLayout_4->addWidget(conditionconfigButton, 4, 0, 1, 1);

        medicationconfigButton = new QPushButton(scrollAreaWidgetContents);
        medicationconfigButton->setObjectName(QString::fromUtf8("medicationconfigButton"));
        medicationconfigButton->setMinimumSize(QSize(0, 60));
        medicationconfigButton->setFont(font);
        medicationconfigButton->setIcon(icon2);

        gridLayout_4->addWidget(medicationconfigButton, 5, 0, 1, 1);

        appsettingsconfigButton = new QPushButton(scrollAreaWidgetContents);
        appsettingsconfigButton->setObjectName(QString::fromUtf8("appsettingsconfigButton"));
        appsettingsconfigButton->setMinimumSize(QSize(0, 60));
        appsettingsconfigButton->setFont(font);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/icons/icon/settings2.png"), QSize(), QIcon::Normal, QIcon::Off);
        appsettingsconfigButton->setIcon(icon3);

        gridLayout_4->addWidget(appsettingsconfigButton, 6, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 7, 0, 1, 1);

        insuranceconfigButton = new QPushButton(scrollAreaWidgetContents);
        insuranceconfigButton->setObjectName(QString::fromUtf8("insuranceconfigButton"));
        insuranceconfigButton->setMinimumSize(QSize(0, 60));
        insuranceconfigButton->setFont(font);

        gridLayout_4->addWidget(insuranceconfigButton, 1, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_3->addWidget(scrollArea, 0, 0, 1, 1);


        gridLayout_2->addWidget(widget, 0, 0, 1, 1);

        widget_2 = new QWidget(Configure);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMaximumSize(QSize(16777215, 50));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        optionsButton = new QPushButton(widget_2);
        optionsButton->setObjectName(QString::fromUtf8("optionsButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(optionsButton->sizePolicy().hasHeightForWidth());
        optionsButton->setSizePolicy(sizePolicy);
        optionsButton->setMinimumSize(QSize(70, 40));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        optionsButton->setFont(font1);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/icons/icon/options.png"), QSize(), QIcon::Normal, QIcon::Off);
        optionsButton->setIcon(icon4);

        gridLayout->addWidget(optionsButton, 0, 0, 1, 1);

        exitButton = new QPushButton(widget_2);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        sizePolicy.setHeightForWidth(exitButton->sizePolicy().hasHeightForWidth());
        exitButton->setSizePolicy(sizePolicy);
        exitButton->setMinimumSize(QSize(70, 40));
        exitButton->setFont(font1);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/icons/icon/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        exitButton->setIcon(icon5);

        gridLayout->addWidget(exitButton, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget_2, 1, 0, 1, 1);


        retranslateUi(Configure);

        QMetaObject::connectSlotsByName(Configure);
    } // setupUi

    void retranslateUi(QWidget *Configure)
    {
        Configure->setWindowTitle(QApplication::translate("Configure", "Form", 0, QApplication::UnicodeUTF8));
        bioconfigButton->setText(QApplication::translate("Configure", "Edit Personal Information", 0, QApplication::UnicodeUTF8));
        contactconfigButton->setText(QApplication::translate("Configure", "Edit Emergency Contact", 0, QApplication::UnicodeUTF8));
        allergyconfigButton->setText(QApplication::translate("Configure", "Edit Allergies", 0, QApplication::UnicodeUTF8));
        conditionconfigButton->setText(QApplication::translate("Configure", "Edit Medical Conditions", 0, QApplication::UnicodeUTF8));
        medicationconfigButton->setText(QApplication::translate("Configure", "Edit Medications", 0, QApplication::UnicodeUTF8));
        appsettingsconfigButton->setText(QApplication::translate("Configure", "Edit Application Settings", 0, QApplication::UnicodeUTF8));
        insuranceconfigButton->setText(QApplication::translate("Configure", "Edit Health Insurance Information", 0, QApplication::UnicodeUTF8));
        optionsButton->setText(QApplication::translate("Configure", "Options", 0, QApplication::UnicodeUTF8));
        exitButton->setText(QApplication::translate("Configure", "Exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Configure: public Ui_Configure {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_H
