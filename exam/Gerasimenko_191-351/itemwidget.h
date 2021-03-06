#ifndef ITEMWIDGET_H
#define ITEMWIDGET_H

#include <QWidget>
#include <QMouseEvent>

namespace Ui {
class ItemWidget;
}

class ItemWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ItemWidget(QWidget *parent = nullptr);
    ~ItemWidget();
    void showItem();
private:
    Ui::ItemWidget *ui;
    bool isShowed = false;
};

#endif // ITEMWIDGET_H
