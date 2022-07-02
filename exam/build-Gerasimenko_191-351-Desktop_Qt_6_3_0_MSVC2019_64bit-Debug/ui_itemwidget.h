/********************************************************************************
** Form generated from reading UI file 'itemwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMWIDGET_H
#define UI_ITEMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ItemWidget
{
public:
    QLineEdit *numLabel;

    void setupUi(QWidget *ItemWidget)
    {
        if (ItemWidget->objectName().isEmpty())
            ItemWidget->setObjectName(QString::fromUtf8("ItemWidget"));
        ItemWidget->resize(211, 94);
        ItemWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        numLabel = new QLineEdit(ItemWidget);
        numLabel->setObjectName(QString::fromUtf8("numLabel"));
        numLabel->setGeometry(QRect(10, 10, 191, 71));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(numLabel->sizePolicy().hasHeightForWidth());
        numLabel->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        numLabel->setFont(font);
        numLabel->setAlignment(Qt::AlignCenter);
        numLabel->setReadOnly(true);

        retranslateUi(ItemWidget);

        QMetaObject::connectSlotsByName(ItemWidget);
    } // setupUi

    void retranslateUi(QWidget *ItemWidget)
    {
        ItemWidget->setWindowTitle(QCoreApplication::translate("ItemWidget", "Form", nullptr));
        numLabel->setPlaceholderText(QCoreApplication::translate("ItemWidget", "?????????????", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ItemWidget: public Ui_ItemWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMWIDGET_H
