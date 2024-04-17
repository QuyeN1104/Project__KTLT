#include "loginform.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    LoginForm *cuaSo = new LoginForm();
    return app.exec();
}
