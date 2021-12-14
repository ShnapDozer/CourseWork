#include "main_w.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Main_W w;
    w.show();
    return a.exec();
}
