#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.setWindowIcon(QIcon(":/new/prefix1/icon.ico"));

    w.setWindowTitle("Процентный Калькулятор");
    w.show();
    return a.exec();
}
