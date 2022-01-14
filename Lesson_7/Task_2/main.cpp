#include "antibadwords.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AntiBadWords w;
    w.show();
    return a.exec();
}
