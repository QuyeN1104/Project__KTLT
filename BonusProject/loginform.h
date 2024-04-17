#ifndef LOGINFORM_H
#define LOGINFORM_H

#include <QGroupBox>
#include <QFormLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>
#include <QCheckBox>
#include <QPixmap>
#include <QFont>
#include <QWidget>
#include <QHBoxLayout>
#include <QPalette>
#include <QObject>

class LoginForm : public QLabel {
    Q_OBJECT

    public:
        LoginForm();
    public slots:
        void showPassword();
    private:
        QLabel *regionLogin;
        QVBoxLayout *regionLoginLayout;

        QLabel *title;

        QFormLayout *loginBox;
        QLineEdit *userName;
        QLineEdit *passWord;

        QCheckBox *visiblePassword;

        QPushButton *loginButton;

};

#endif // LOGINFORM_H
