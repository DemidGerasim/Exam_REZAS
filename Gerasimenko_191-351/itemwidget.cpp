#include "itemwidget.h"
#include "ui_itemwidget.h"

ItemWidget::ItemWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ItemWidget)
{
    ui->setupUi(this);
    ui->numLabel->setVisible(true);
}

ItemWidget::~ItemWidget()
{
    delete ui;
}

void ItemWidget::setData(const QString number) {
  promo = number;
}

const QString ItemWidget::showItem(){
    if(!isShowed){
        ui->numLabel->setText(promo);
        isShowed = true;

        return promo;
    }
    return "";
}
