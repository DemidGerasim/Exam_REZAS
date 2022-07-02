#include "mainwindow.h"
#include "promowindow.h"

#include <QFile>
#include <QMessageBox>

#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) //создаём окно
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  ui->passwordEdit->setEchoMode(QLineEdit::Password);// Во время воода пароля отображаются точки, а не цифры
}

MainWindow::~MainWindow() { delete ui; } //деструктор (удаление окна)

void MainWindow::on_loginButton_clicked() {

  const auto PASSWORD = ui->passwordEdit->text(); // сравниваем то что в окне ввода пароля
  const auto GOOD_PASSWORD = "336431"; // с заданным паролем

  if (PASSWORD == GOOD_PASSWORD) {
    auto nextWindow = new PromoWindow();
    nextWindow->show();
    this->close();

    return;
  }

  QMessageBox::warning(this, "Login", "Wrong password"); // если пароль неверный выводим сообщение
}


