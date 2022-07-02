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

void ItemWidget::showItem(){
    if(!isShowed){
        ui->numLabel->setText("??????");
        isShowed = true;
    }
    return;
}
