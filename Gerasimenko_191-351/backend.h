#define BACKEND_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include "cryptocontroller.h"


class backend
{

public:
    int sum3cards;
    //cryptoController CC;
    backend();
    QString* genRandom9Cards();
    QString genNewCard();
    //QString genNewEncryptCard();
    //QString* genRandom9EncryptCards();
    void summingCards(int digit);
    void resetGame();
    //QString getDecryptCard(QString card);

public slots:

private:


signals:


};
