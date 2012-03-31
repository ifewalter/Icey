/********************************************************************************
** Form generated from reading UI file 'information.ui'
**
** Created: Wed 23. Nov 14:34:16 2011
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATION_H
#define UI_INFORMATION_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QToolBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Information
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *exitButton;
    QToolBox *ConfigTab;
    QWidget *aboutMeTab;
    QGridLayout *gridLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_4;
    QLabel *personalDetailsLabel;
    QLabel *nameLabel;
    QLabel *ageLabel;
    QLabel *bloodTypeLabel;
    QLabel *insuranceTitle;
    QLabel *insuranceProvider;
    QLabel *insuranceID;
    QWidget *page;
    QGridLayout *gridLayout_7;
    QListWidget *contactsList;
    QWidget *allergiesTab;
    QGridLayout *gridLayout_5;
    QListWidget *allergyList;
    QWidget *conditionsTab;
    QGridLayout *gridLayout_6;
    QListWidget *conditionsList;
    QWidget *medicationsTab;
    QGridLayout *gridLayout_8;
    QListWidget *medicationsList;

    void setupUi(QWidget *Information)
    {
        if (Information->objectName().isEmpty())
            Information->setObjectName(QString::fromUtf8("Information"));
        Information->resize(360, 640);
        gridLayout_2 = new QGridLayout(Information);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        widget = new QWidget(Information);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(0, 40));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icons/icon/options.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        exitButton = new QPushButton(widget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        sizePolicy.setHeightForWidth(exitButton->sizePolicy().hasHeightForWidth());
        exitButton->setSizePolicy(sizePolicy);
        exitButton->setMinimumSize(QSize(0, 40));
        exitButton->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/icons/icon/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        exitButton->setIcon(icon1);

        gridLayout->addWidget(exitButton, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget, 1, 0, 1, 1);

        ConfigTab = new QToolBox(Information);
        ConfigTab->setObjectName(QString::fromUtf8("ConfigTab"));
        ConfigTab->setFont(font);
        ConfigTab->setLocale(QLocale(QLocale::English, QLocale::UnitedKingdom));
        ConfigTab->setFrameShape(QFrame::StyledPanel);
        ConfigTab->setFrameShadow(QFrame::Raised);
        aboutMeTab = new QWidget();
        aboutMeTab->setObjectName(QString::fromUtf8("aboutMeTab"));
        aboutMeTab->setGeometry(QRect(0, 0, 340, 409));
        gridLayout_3 = new QGridLayout(aboutMeTab);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        scrollArea = new QScrollArea(aboutMeTab);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 320, 389));
        gridLayout_4 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        personalDetailsLabel = new QLabel(scrollAreaWidgetContents);
        personalDetailsLabel->setObjectName(QString::fromUtf8("personalDetailsLabel"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setUnderline(true);
        font1.setWeight(75);
        personalDetailsLabel->setFont(font1);
        personalDetailsLabel->setScaledContents(true);

        gridLayout_4->addWidget(personalDetailsLabel, 0, 0, 1, 1);

        nameLabel = new QLabel(scrollAreaWidgetContents);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        QFont font2;
        font2.setPointSize(12);
        nameLabel->setFont(font2);
        nameLabel->setScaledContents(true);

        gridLayout_4->addWidget(nameLabel, 2, 0, 1, 1);

        ageLabel = new QLabel(scrollAreaWidgetContents);
        ageLabel->setObjectName(QString::fromUtf8("ageLabel"));
        ageLabel->setFont(font2);
        ageLabel->setScaledContents(true);

        gridLayout_4->addWidget(ageLabel, 3, 0, 1, 1);

        bloodTypeLabel = new QLabel(scrollAreaWidgetContents);
        bloodTypeLabel->setObjectName(QString::fromUtf8("bloodTypeLabel"));
        bloodTypeLabel->setFont(font2);
        bloodTypeLabel->setScaledContents(true);

        gridLayout_4->addWidget(bloodTypeLabel, 4, 0, 1, 1);

        insuranceTitle = new QLabel(scrollAreaWidgetContents);
        insuranceTitle->setObjectName(QString::fromUtf8("insuranceTitle"));
        insuranceTitle->setFont(font1);
        insuranceTitle->setScaledContents(true);

        gridLayout_4->addWidget(insuranceTitle, 5, 0, 1, 1);

        insuranceProvider = new QLabel(scrollAreaWidgetContents);
        insuranceProvider->setObjectName(QString::fromUtf8("insuranceProvider"));
        insuranceProvider->setFont(font2);
        insuranceProvider->setScaledContents(true);

        gridLayout_4->addWidget(insuranceProvider, 6, 0, 1, 1);

        insuranceID = new QLabel(scrollAreaWidgetContents);
        insuranceID->setObjectName(QString::fromUtf8("insuranceID"));
        insuranceID->setFont(font2);
        insuranceID->setScaledContents(true);

        gridLayout_4->addWidget(insuranceID, 7, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_3->addWidget(scrollArea, 0, 0, 1, 1);

        ConfigTab->addItem(aboutMeTab, QString::fromUtf8("About Me"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 340, 409));
        gridLayout_7 = new QGridLayout(page);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        contactsList = new QListWidget(page);
        contactsList->setObjectName(QString::fromUtf8("contactsList"));

        gridLayout_7->addWidget(contactsList, 0, 0, 1, 1);

        ConfigTab->addItem(page, QString::fromUtf8("Emergency Contacts"));
        allergiesTab = new QWidget();
        allergiesTab->setObjectName(QString::fromUtf8("allergiesTab"));
        allergiesTab->setGeometry(QRect(0, 0, 340, 409));
        gridLayout_5 = new QGridLayout(allergiesTab);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        allergyList = new QListWidget(allergiesTab);
        allergyList->setObjectName(QString::fromUtf8("allergyList"));
        allergyList->setMouseTracking(true);
        allergyList->setProperty("showDropIndicator", QVariant(false));
        allergyList->setSelectionMode(QAbstractItemView::NoSelection);
        allergyList->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        allergyList->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        gridLayout_5->addWidget(allergyList, 0, 1, 1, 1);

        ConfigTab->addItem(allergiesTab, QString::fromUtf8("My Allergies"));
        conditionsTab = new QWidget();
        conditionsTab->setObjectName(QString::fromUtf8("conditionsTab"));
        conditionsTab->setGeometry(QRect(0, 0, 340, 409));
        gridLayout_6 = new QGridLayout(conditionsTab);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        conditionsList = new QListWidget(conditionsTab);
        conditionsList->setObjectName(QString::fromUtf8("conditionsList"));
        conditionsList->setSelectionMode(QAbstractItemView::NoSelection);
        conditionsList->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        conditionsList->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        gridLayout_6->addWidget(conditionsList, 0, 0, 1, 1);

        ConfigTab->addItem(conditionsTab, QString::fromUtf8("My Medical Conditions"));
        medicationsTab = new QWidget();
        medicationsTab->setObjectName(QString::fromUtf8("medicationsTab"));
        medicationsTab->setGeometry(QRect(0, 0, 340, 409));
        gridLayout_8 = new QGridLayout(medicationsTab);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        medicationsList = new QListWidget(medicationsTab);
        medicationsList->setObjectName(QString::fromUtf8("medicationsList"));
        medicationsList->setSelectionMode(QAbstractItemView::NoSelection);
        medicationsList->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        medicationsList->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        gridLayout_8->addWidget(medicationsList, 0, 0, 1, 1);

        ConfigTab->addItem(medicationsTab, QString::fromUtf8("My Medications"));

        gridLayout_2->addWidget(ConfigTab, 0, 0, 1, 1);


        retranslateUi(Information);

        QMetaObject::connectSlotsByName(Information);
    } // setupUi

    void retranslateUi(QWidget *Information)
    {
        Information->setWindowTitle(QApplication::translate("Information", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Information", "Options", 0, QApplication::UnicodeUTF8));
        exitButton->setText(QApplication::translate("Information", "Exit", 0, QApplication::UnicodeUTF8));
        personalDetailsLabel->setText(QApplication::translate("Information", "Personal Details", 0, QApplication::UnicodeUTF8));
        nameLabel->setText(QApplication::translate("Information", "Name", 0, QApplication::UnicodeUTF8));
        ageLabel->setText(QApplication::translate("Information", "Age", 0, QApplication::UnicodeUTF8));
        bloodTypeLabel->setText(QApplication::translate("Information", "Blood Group", 0, QApplication::UnicodeUTF8));
        insuranceTitle->setText(QApplication::translate("Information", "Insurance Information", 0, QApplication::UnicodeUTF8));
        insuranceProvider->setText(QApplication::translate("Information", "Provider", 0, QApplication::UnicodeUTF8));
        insuranceID->setText(QApplication::translate("Information", "InsuranceID", 0, QApplication::UnicodeUTF8));
        ConfigTab->setItemText(ConfigTab->indexOf(aboutMeTab), QApplication::translate("Information", "About Me", 0, QApplication::UnicodeUTF8));
        ConfigTab->setItemText(ConfigTab->indexOf(page), QApplication::translate("Information", "Emergency Contacts", 0, QApplication::UnicodeUTF8));
        ConfigTab->setItemText(ConfigTab->indexOf(allergiesTab), QApplication::translate("Information", "My Allergies", 0, QApplication::UnicodeUTF8));
        ConfigTab->setItemText(ConfigTab->indexOf(conditionsTab), QApplication::translate("Information", "My Medical Conditions", 0, QApplication::UnicodeUTF8));
        ConfigTab->setItemText(ConfigTab->indexOf(medicationsTab), QApplication::translate("Information", "My Medications", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Information: public Ui_Information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATION_H
