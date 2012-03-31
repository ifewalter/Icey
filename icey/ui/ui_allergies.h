/********************************************************************************
** Form generated from reading UI file 'allergies.ui'
**
** Created: Wed 23. Nov 20:01:37 2011
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLERGIES_H
#define UI_ALLERGIES_H

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

class Ui_Allergies
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

    void setupUi(QWidget *Allergies)
    {
        if (Allergies->objectName().isEmpty())
            Allergies->setObjectName(QString::fromUtf8("Allergies"));
        Allergies->resize(360, 640);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Allergies->sizePolicy().hasHeightForWidth());
        Allergies->setSizePolicy(sizePolicy);
        gridLayout_4 = new QGridLayout(Allergies);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        widget = new QWidget(Allergies);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        listWidget = new QListWidget(widget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QFont font;
        font.setPointSize(12);
        listWidget->setFont(font);
        listWidget->setContextMenuPolicy(Qt::NoContextMenu);
        listWidget->setAutoScrollMargin(7);
        listWidget->setProperty("showDropIndicator", QVariant(false));
        listWidget->setDragDropMode(QAbstractItemView::NoDragDrop);
        listWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        listWidget->setTextElideMode(Qt::ElideLeft);
        listWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        listWidget->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        listWidget->setMovement(QListView::Static);
        listWidget->setFlow(QListView::TopToBottom);
        listWidget->setProperty("isWrapping", QVariant(false));
        listWidget->setResizeMode(QListView::Fixed);
        listWidget->setWordWrap(false);

        gridLayout_2->addWidget(listWidget, 0, 0, 1, 1);


        gridLayout_4->addWidget(widget, 1, 0, 1, 1);

        widget_2 = new QWidget(Allergies);
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

        label = new QLabel(Allergies);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);

        gridLayout_4->addWidget(label, 0, 0, 1, 1);


        retranslateUi(Allergies);

        QMetaObject::connectSlotsByName(Allergies);
    } // setupUi

    void retranslateUi(QWidget *Allergies)
    {
        Allergies->setWindowTitle(QApplication::translate("Allergies", "Allergies", 0, QApplication::UnicodeUTF8));
        actionButton->setText(QApplication::translate("Allergies", "Options", 0, QApplication::UnicodeUTF8));
        backButton->setText(QApplication::translate("Allergies", "Back", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Allergies", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Allergies</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Allergies: public Ui_Allergies {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLERGIES_H
