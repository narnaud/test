#include <QApplication>
#include <QWidget>

#include "ui_mainwidget.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget widget;
    Ui::MainWidget ui;
    ui.setupUi(&widget);
    widget.show();

    return app.exec();
}
