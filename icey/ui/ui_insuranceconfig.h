/********************************************************************************
** Form generated from reading UI file 'insuranceconfig.ui'
**
** Created: Sat 26. Nov 17:23:43 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSURANCECONFIG_H
#define UI_INSURANCECONFIG_H

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

class Ui_InsuranceConfig
{
public:
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget_11;
    QGridLayout *gridLayout_9;
    QLabel *label_8;
    QLabel *label_4;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLineEdit *providerText;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLineEdit *insuranceNumberText;
    QSpacerItem *verticalSpacer;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QPushButton *optionButton;
    QPushButton *cancelButton;

    void setupUi(QWidget *InsuranceConfig)
    {
        if (InsuranceConfig->objectName().isEmpty())
            InsuranceConfig->setObjectName(QString::fromUtf8("InsuranceConfig"));
        InsuranceConfig->resize(360, 640);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(InsuranceConfig->sizePolicy().hasHeightForWidth());
        InsuranceConfig->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(InsuranceConfig);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        scrollArea = new QScrollArea(InsuranceConfig);
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
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);

        gridLayout_9->addWidget(label_4, 0, 1, 1, 1);


        verticalLayout->addWidget(widget_11);

        widget_6 = new QWidget(scrollAreaWidgetContents_2);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_4 = new QHBoxLayout(widget_6);
        horizontalLayout_4->setSpacing(9);
#ifndef Q_OS_MAC
        horizontalLayout_4->setContentsMargins(9, 9, 9, 9);
#endif
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_6 = new QLabel(widget_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_6->setFont(font1);

        horizontalLayout_4->addWidget(label_6);

        providerText = new QLineEdit(widget_6);
        providerText->setObjectName(QString::fromUtf8("providerText"));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        providerText->setFont(font2);
        providerText->setMaxLength(100);

        horizontalLayout_4->addWidget(providerText);


        verticalLayout->addWidget(widget_6);

        widget_7 = new QWidget(scrollAreaWidgetContents_2);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_5 = new QHBoxLayout(widget_7);
        horizontalLayout_5->setSpacing(9);
#ifndef Q_OS_MAC
        horizontalLayout_5->setContentsMargins(9, 9, 9, 9);
#endif
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_7 = new QLabel(widget_7);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);

        horizontalLayout_5->addWidget(label_7);

        insuranceNumberText = new QLineEdit(widget_7);
        insuranceNumberText->setObjectName(QString::fromUtf8("insuranceNumberText"));
        insuranceNumberText->setFont(font2);
        insuranceNumberText->setMaxLength(100);

        horizontalLayout_5->addWidget(insuranceNumberText);


        verticalLayout->addWidget(widget_7);

        verticalSpacer = new QSpacerItem(20, 395, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_2->addWidget(scrollArea);

        widget_2 = new QWidget(InsuranceConfig);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMaximumSize(QSize(16777215, 50));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setSpacing(1);
        gridLayout->setContentsMargins(1, 1, 1, 1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        optionButton = new QPushButton(widget_2);
        optionButton->setObjectName(QString::fromUtf8("optionButton"));
        optionButton->setMinimumSize(QSize(0, 40));
        optionButton->setFont(font1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icons/icon/options.png"), QSize(), QIcon::Normal, QIcon::Off);
        optionButton->setIcon(icon);

        gridLayout->addWidget(optionButton, 0, 0, 1, 1);

        cancelButton = new QPushButton(widget_2);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setMinimumSize(QSize(0, 40));
        cancelButton->setFont(font1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/icons/icon/prev.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon1);

        gridLayout->addWidget(cancelButton, 0, 1, 1, 1);


        verticalLayout_2->addWidget(widget_2);


        retranslateUi(InsuranceConfig);

        QMetaObject::connectSlotsByName(InsuranceConfig);
    } // setupUi

    void retranslateUi(QWidget *InsuranceConfig)
    {
        InsuranceConfig->setWindowTitle(QApplication::translate("InsuranceConfig", "Form", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("InsuranceConfig", "Health Insurance", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("InsuranceConfig", "Insurance Provider", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("InsuranceConfig", "Insurance Number", 0, QApplication::UnicodeUTF8));
        optionButton->setText(QApplication::translate("InsuranceConfig", "Options", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("InsuranceConfig", "Back", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class InsuranceConfig: public Ui_InsuranceConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSURANCECONFIG_H
