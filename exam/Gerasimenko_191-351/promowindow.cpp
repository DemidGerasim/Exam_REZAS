#include "mainwindow.h"
#include "itemwidget.h"
#include <QFile>
#include <QMessageBox>
#include "promowindow.h"
#include <qglobal.h>
#include "ui_mainwindow.h"
#include "ui_itemwidget.h"
#include "ui_promowindow.h"

PromoWindow::PromoWindow(QWidget *parent) //создание окна
    : QMainWindow(parent), ui(new Ui::PromoWindow) {
  ui->setupUi(this);  // подключение окошка

  connect(ui->itemListWidget, SIGNAL(itemClicked(QListWidgetItem*)),
          this, SLOT(onListItemClicked(QListWidgetItem*))); //при клике на кнопку передаётся сигнал

  for (auto i=0;i<10;i++) { // количество итемов

     this->addItemInList(10); // вывод итемов
   }
}

PromoWindow::~PromoWindow() { delete ui; } // удаляется окно при закрытии

void PromoWindow::addItemInList(const int number) { // добавляем новый итем
  auto listItemW = new QListWidgetItem();
  auto itemW = new ItemWidget(this);

//  listItemW->setSizeHint(itemW->sizeHint());

  ui->itemListWidget->addItem(listItemW);
  ui->itemListWidget->setItemWidget(listItemW, itemW);


}

void PromoWindow::on_pushButton_clicked()
{

}


void PromoWindow::on_itemListWidget_itemClicked(QListWidgetItem *item)
{
    auto itemWidget = dynamic_cast<ItemWidget*>(
           ui->itemListWidget->itemWidget(item));
    //auto showpromo = itemWidget->showItem();
}

