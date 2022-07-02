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

  for(int i=0;i<9;i++){
      QString str;
      str.resize(4);

      for (int s = 0; s < 4 ; ++s)
          str[s] = QChar('A' + char(rand() % ('Z' - 'A')));
      this->addItemInList(str);
  }
}

PromoWindow::~PromoWindow() { delete ui; } // удаляется окно при закрытии

void PromoWindow::addItemInList(const QString number) { // добавляем новый итем
  auto listItemW = new QListWidgetItem();
  auto itemW = new ItemWidget(this);
  itemW->setData(number);
//  listItemW->setSizeHint(itemW->sizeHint());

  ui->itemListWidget->addItem(listItemW);
  ui->itemListWidget->setItemWidget(listItemW, itemW);


}

QListWidgetItem *ItemWidget1;


void PromoWindow::on_pushButton_clicked()
{
    auto itemWidget = dynamic_cast<ItemWidget*>(
           ui->itemListWidget->itemWidget(ItemWidget1));
    auto showpromo = itemWidget->showItem();
}


void PromoWindow::on_itemListWidget_itemClicked(QListWidgetItem *item)
{
    ItemWidget1 = item;
//    auto itemWidget = dynamic_cast<ItemWidget*>(
//           ui->itemListWidget->itemWidget(item));
    //auto showpromo = itemWidget->showItem();
}

