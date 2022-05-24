#include "TaskManager.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Repo r{};
    TaskManager w{r};
    w.show();
    return a.exec();
}
