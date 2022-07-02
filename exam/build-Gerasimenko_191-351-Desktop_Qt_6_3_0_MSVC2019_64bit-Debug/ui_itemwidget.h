/********************************************************************************
** Form generated from reading UI file 'itemwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMWIDGET_H
#define UI_ITEMWIDGET_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ItemWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *numLabel;

    void setupUi(QWidget *ItemWidget)
    {
        if (ItemWidget->objectName().isEmpty())
            ItemWidget->setObjectName(QString::fromUtf8("ItemWidget"));
        ItemWidget->resize(176, 76);
        ItemWidget->setStyleSheet(QString::fromUtf8("background-color: gray;\n"
"background-color: rgb(170, 170, 255);"));
        ItemWidget->setLocale(QLocale(QLocale::Russian, QLocale::Russia));
        gridLayout = new QGridLayout(ItemWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(2, 2, 2, 2);
        numLabel = new QLabel(ItemWidget);
        numLabel->setObjectName(QString::fromUtf8("numLabel"));
        numLabel->setEnabled(true);
        QFont font;
        font.setPointSize(12);
        numLabel->setFont(font);
        numLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(numLabel, 0, 0, 1, 1);


        retranslateUi(ItemWidget);

        QMetaObject::connectSlotsByName(ItemWidget);
    } // setupUi

    void retranslateUi(QWidget *ItemWidget)
    {
        ItemWidget->setWindowTitle(QCoreApplication::translate("ItemWidget", "Form", nullptr));
        numLabel->setText(QCoreApplication::translate("ItemWidget", "\342\200\242\342\200\242\342\200\242\342\200\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ItemWidget: public Ui_ItemWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMWIDGET_H
