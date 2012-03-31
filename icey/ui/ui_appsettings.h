/********************************************************************************
** Form generated from reading UI file 'appsettings.ui'
**
** Created: Wed 23. Nov 20:01:38 2011
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPSETTINGS_H
#define UI_APPSETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_appSettings
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *optionsButton;
    QPushButton *backButton;
    QWidget *widget_2;
    QGridLayout *gridLayout_7;
    QWidget *widget_7;
    QGridLayout *gridLayout_13;
    QPushButton *updateButton;
    QSpacerItem *verticalSpacer;
    QLabel *label_12;

    void setupUi(QWidget *appSettings)
    {
        if (appSettings->objectName().isEmpty())
            appSettings->setObjectName(QString::fromUtf8("appSettings"));
        appSettings->resize(360, 640);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(appSettings->sizePolicy().hasHeightForWidth());
        appSettings->setSizePolicy(sizePolicy);
        appSettings->setMinimumSize(QSize(360, 640));
        gridLayout_2 = new QGridLayout(appSettings);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        widget = new QWidget(appSettings);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(16777215, 50));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        optionsButton = new QPushButton(widget);
        optionsButton->setObjectName(QString::fromUtf8("optionsButton"));
        optionsButton->setMinimumSize(QSize(0, 50));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        optionsButton->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icons/icon/options.png"), QSize(), QIcon::Normal, QIcon::Off);
        optionsButton->setIcon(icon);

        gridLayout->addWidget(optionsButton, 0, 0, 1, 1);

        backButton = new QPushButton(widget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setMinimumSize(QSize(0, 50));
        backButton->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/icons/icon/prev.png"), QSize(), QIcon::Normal, QIcon::Off);
        backButton->setIcon(icon1);

        gridLayout->addWidget(backButton, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget, 2, 0, 1, 1);

        widget_2 = new QWidget(appSettings);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy1);
        widget_2->setMaximumSize(QSize(360, 640));
        gridLayout_7 = new QGridLayout(widget_2);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        widget_7 = new QWidget(widget_2);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        gridLayout_13 = new QGridLayout(widget_7);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        updateButton = new QPushButton(widget_7);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(updateButton->sizePolicy().hasHeightForWidth());
        updateButton->setSizePolicy(sizePolicy2);
        updateButton->setMinimumSize(QSize(0, 50));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        updateButton->setFont(font1);
        updateButton->setAutoDefault(false);
        updateButton->setDefault(false);
        updateButton->setFlat(false);

        gridLayout_13->addWidget(updateButton, 0, 0, 1, 1);


        gridLayout_7->addWidget(widget_7, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer, 1, 0, 1, 1);


        gridLayout_2->addWidget(widget_2, 1, 0, 1, 1);

        label_12 = new QLabel(appSettings);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMaximumSize(QSize(16777215, 30));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label_12->setFont(font2);
        label_12->setLayoutDirection(Qt::LeftToRight);
        label_12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_2->addWidget(label_12, 0, 0, 1, 1);


        retranslateUi(appSettings);

        QMetaObject::connectSlotsByName(appSettings);
    } // setupUi

    void retranslateUi(QWidget *appSettings)
    {
        appSettings->setWindowTitle(QApplication::translate("appSettings", "Form", 0, QApplication::UnicodeUTF8));
        optionsButton->setText(QApplication::translate("appSettings", "Options", 0, QApplication::UnicodeUTF8));
        backButton->setText(QApplication::translate("appSettings", "Back", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        widget_7->setToolTip(QApplication::translate("appSettings", "This is different from the primary phone unlock code", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        widget_7->setStatusTip(QApplication::translate("appSettings", "This is different from the primary phone unlock code", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        updateButton->setText(QApplication::translate("appSettings", "Visit application support page", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("appSettings", "Application Settings", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class appSettings: public Ui_appSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPSETTINGS_H
