/********************************************************************************
** Form generated from reading UI file 'promowindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROMOWINDOW_H
#define UI_PROMOWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PromoWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QListWidget *itemListWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PromoWindow)
    {
        if (PromoWindow->objectName().isEmpty())
            PromoWindow->setObjectName(QString::fromUtf8("PromoWindow"));
        PromoWindow->resize(473, 511);
        PromoWindow->setAutoFillBackground(false);
        PromoWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255,255,255);"));
        centralwidget = new QWidget(PromoWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 151, 51));
        QFont font;
        font.setBold(true);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        itemListWidget = new QListWidget(centralwidget);
        itemListWidget->setObjectName(QString::fromUtf8("itemListWidget"));
        itemListWidget->setGeometry(QRect(10, 80, 451, 381));
        PromoWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PromoWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 473, 21));
        PromoWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(PromoWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        PromoWindow->setStatusBar(statusbar);

        retranslateUi(PromoWindow);

        QMetaObject::connectSlotsByName(PromoWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PromoWindow)
    {
        PromoWindow->setWindowTitle(QCoreApplication::translate("PromoWindow", "\320\237\321\200\320\276\320\274\320\276\320\272\320\276\320\264\321\213", nullptr));
        pushButton->setText(QCoreApplication::translate("PromoWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\272\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PromoWindow: public Ui_PromoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROMOWINDOW_H
