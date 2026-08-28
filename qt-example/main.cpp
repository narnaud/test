#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QLabel label("Hello, Minitel! How are you?");
    label.setWindowTitle("Qt Example");
    label.resize(200, 100);
    label.setAlignment(Qt::AlignCenter);
    label.show();

    return app.exec();
}
