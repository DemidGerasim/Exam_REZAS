#include "backend.h"
#include "cryptocontroller.h"
using namespace std;

backend::backend()
{
    sum3cards = 0;
}


//генерация 9-ти карточек БЕЗ ШИФРОВАНИЯ
QString* backend::genRandom9Cards(){
    QString* cards = new QString[9];
    for(int i=0;i<9;i++){
        cards[i] = genNewCard();
    }
    return cards;
}

////генерация 9-ти карточек C ШИФРОВАНИЕМ
//QString* backend::genRandom9EncryptCards(){
//    QString* cards = new QString[9];
//    for(int i=0;i<9;i++){
//        cards[i] = genNewEncryptCard();
//    }
//    return cards;
//}

//генерация карточки БЕЗ ШИФРОВАНИЯ
QString backend::genNewCard(){
    QString str;
    str.resize(4);

    for (int s = 0; s < 4 ; ++s)
        str[s] = QChar('A' + char(rand() % ('Z' - 'A')));
    return str;
}

//генерация карточки С ШИФРОВАНИЕМ
//QString backend::genNewEncryptCard(){
   // QString str;
   // str.resize(4);

   // for (int s = 0; s < 4 ; ++s){
   //     str[s] = QChar('A' + char(rand() % ('Z' - 'A')));
   // }
   // str = CC.encryptCard(str);
   // return str;
//}

//получаем отображение числа, на которое кликнули и дальнейшая передача его в функцию суммирования
//QString backend::getDecryptCard(QString card){
//    QString decryptCard = CC.decryptCard(card);
//    return decryptCard;
//}
