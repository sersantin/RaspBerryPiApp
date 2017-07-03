#include <QApplication>
#include <QPushButton>
#include "index.h"

int main(int argc, char **argv) {
    QApplication app (argc, argv);
    Index view1;
    view1.show();

    return app.exec();
}
