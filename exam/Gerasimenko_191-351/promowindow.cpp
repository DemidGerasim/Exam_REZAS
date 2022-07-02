#include "mainwindow.h"
#include "itemwidget.h"
#include <QFile>
#include <QMessageBox>
#include "promowindow.h"
#include <qglobal.h>
#include "ui_mainwindow.h"
#include "ui_itemwidget.h"
#include "ui_promowindow.h"

PromoWindow::PromoWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::PromoWindow) {
  ui->setupUi(this);

  connect(ui->itemListWidget, SIGNAL(itemClicked(QListWidgetItem*)),
          this, SLOT(onListItemClicked(QListWidgetItem*)));

  for (auto i=0;i<9;i++) {

     this->addItemInList(10);
   }
}

PromoWindow::~PromoWindow() { delete ui; }

void PromoWindow::addItemInList(const int number) {
  auto listItemW = new QListWidgetItem();
  auto itemW = new ItemWidget(this);

  listItemW->setSizeHint(itemW->sizeHint());

  ui->itemListWidget->addItem(listItemW);
  ui->itemListWidget->setItemWidget(listItemW, itemW);


}
