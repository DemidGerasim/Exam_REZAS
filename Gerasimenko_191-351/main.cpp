#include "mainwindow.h"
#include <QProcess>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    // БЛОК ЗАЩИТЫ ОТ ОТЛАДКИ МЕТОДОМ САМООТЛАДКИ
           QProcess *satelliteProcess = new QProcess();
           int pid = QApplication::applicationPid();
           qDebug() << "pid = " << pid;
           QStringList arguments = {QString::number(pid)};
           qDebug() << "arguments = " << arguments;
           satelliteProcess->start("DebugProtector.exe", arguments);
           bool ProtectorStarted = satelliteProcess->waitForStarted(1000);
           qDebug() << "ProtectorStarted = " << ProtectorStarted;

    return a.exec();
}

