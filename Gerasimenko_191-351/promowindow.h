#ifndef PROMOWINDOW_H
#define PROMOWINDOW_H

#include <QMainWindow>
#include <QListWidget>

namespace Ui {
class PromoWindow;
}

class PromoWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PromoWindow(QWidget *parent = nullptr);
    ~PromoWindow();
    void addItemInList(const QString number);
private slots:
    void on_pushButton_clicked();

    void on_itemListWidget_itemClicked(QListWidgetItem *item);

private:
    Ui::PromoWindow *ui;
};
#endif // PROMOWINDOW_H
