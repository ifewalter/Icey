/********************************************************************************
** Form generated from reading UI file 'bioconfig.ui'
**
** Created: Sat 26. Nov 17:23:41 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIOCONFIG_H
#define UI_BIOCONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BioConfig
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QPushButton *optionButton;
    QPushButton *cancelButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget_11;
    QGridLayout *gridLayout_9;
    QLabel *label_8;
    QLabel *label_4;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *nameText;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *ageText;
    QLabel *label_3;
    QLineEdit *bloodGroupText;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *BioConfig)
    {
        if (BioConfig->objectName().isEmpty())
            BioConfig->setObjectName(QString::fromUtf8("BioConfig"));
        BioConfig->resize(360, 640);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BioConfig->sizePolicy().hasHeightForWidth());
        BioConfig->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(BioConfig);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        widget_2 = new QWidget(BioConfig);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMaximumSize(QSize(16777215, 50));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setSpacing(1);
        gridLayout->setContentsMargins(1, 1, 1, 1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        optionButton = new QPushButton(widget_2);
        optionButton->setObjectName(QString::fromUtf8("optionButton"));
        optionButton->setMinimumSize(QSize(0, 40));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        optionButton->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icons/icon/options.png"), QSize(), QIcon::Normal, QIcon::Off);
        optionButton->setIcon(icon);

        gridLayout->addWidget(optionButton, 0, 0, 1, 1);

        cancelButton = new QPushButton(widget_2);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setMinimumSize(QSize(0, 40));
        cancelButton->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/icons/icon/prev.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon1);

        gridLayout->addWidget(cancelButton, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget_2, 1, 0, 1, 1);

        scrollArea = new QScrollArea(BioConfig);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 340, 572));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_11 = new QWidget(scrollAreaWidgetContents_2);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        gridLayout_9 = new QGridLayout(widget_11);
        gridLayout_9->setSpacing(1);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(1, 3, 1, 1);
        label_8 = new QLabel(widget_11);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(32, 32));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/images/icons/icon/contact2.png")));
        label_8->setScaledContents(true);

        gridLayout_9->addWidget(label_8, 0, 0, 1, 1);

        label_4 = new QLabel(widget_11);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label_4->setFont(font1);

        gridLayout_9->addWidget(label_4, 0, 1, 1, 1);


        verticalLayout->addWidget(widget_11);

        widget_3 = new QWidget(scrollAreaWidgetContents_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setSpacing(1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(1, 3, 1, 1);
        label = new QLabel(widget_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        nameText = new QLineEdit(widget_3);
        nameText->setObjectName(QString::fromUtf8("nameText"));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        nameText->setFont(font2);
        nameText->setMaxLength(100);

        horizontalLayout->addWidget(nameText);


        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(scrollAreaWidgetContents_2);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setSpacing(1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(1, 3, 1, 1);
        label_2 = new QLabel(widget_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        ageText = new QLineEdit(widget_4);
        ageText->setObjectName(QString::fromUtf8("ageText"));
        ageText->setFont(font2);
        ageText->setInputMethodHints(Qt::ImhDigitsOnly);
        ageText->setMaxLength(100);

        horizontalLayout_2->addWidget(ageText);

        label_3 = new QLabel(widget_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_2->addWidget(label_3);

        bloodGroupText = new QLineEdit(widget_4);
        bloodGroupText->setObjectName(QString::fromUtf8("bloodGroupText"));
        bloodGroupText->setFont(font2);
        bloodGroupText->setMaxLength(100);

        horizontalLayout_2->addWidget(bloodGroupText);


        verticalLayout->addWidget(widget_4);

        verticalSpacer = new QSpacerItem(20, 395, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        gridLayout_2->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(BioConfig);

        QMetaObject::connectSlotsByName(BioConfig);
    } // setupUi

    void retranslateUi(QWidget *BioConfig)
    {
        BioConfig->setWindowTitle(QApplication::translate("BioConfig", "Form", 0, QApplication::UnicodeUTF8));
        optionButton->setText(QApplication::translate("BioConfig", "Options", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("BioConfig", "Back", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("BioConfig", "Personal Details", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("BioConfig", "Name:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("BioConfig", "Age:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("BioConfig", "Blood Group", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BioConfig: public Ui_BioConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIOCONFIG_H
