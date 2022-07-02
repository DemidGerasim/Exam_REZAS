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
#include <QtWidgets/QGridLayout>
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
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QListWidget *itemListWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PromoWindow)
    {
        if (PromoWindow->objectName().isEmpty())
            PromoWindow->setObjectName(QString::fromUtf8("PromoWindow"));
        PromoWindow->setEnabled(false);
        PromoWindow->resize(536, 553);
        QFont font;
        font.setFamilies({QString::fromUtf8("Tahoma")});
        font.setPointSize(12);
        PromoWindow->setFont(font);
        PromoWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(PromoWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(false);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setItalic(false);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(175, 175, 175);"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        itemListWidget = new QListWidget(centralwidget);
        itemListWidget->setObjectName(QString::fromUtf8("itemListWidget"));
        itemListWidget->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);"));

        gridLayout->addWidget(itemListWidget, 1, 0, 1, 2);

        PromoWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PromoWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 536, 21));
        PromoWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(PromoWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        PromoWindow->setStatusBar(statusbar);

        retranslateUi(PromoWindow);

        QMetaObject::connectSlotsByName(PromoWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PromoWindow)
    {
        PromoWindow->setWindowTitle(QCoreApplication::translate("PromoWindow", "\320\230\320\263\321\200\320\260", nullptr));
        pushButton->setText(QCoreApplication::translate("PromoWindow", "\320\237\320\276\320\273\321\203\321\207\320\270\321\202\321\214 \320\277\321\200\320\276\320\274\320\276\320\272\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PromoWindow: public Ui_PromoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROMOWINDOW_H
