#include "loginform.h"

LoginForm::LoginForm() : QLabel(){

    // Khai bao cac thanh phan
    regionLogin = new QLabel();
    regionLoginLayout = new QVBoxLayout();

    title = new QLabel();

    loginBox = new QFormLayout();
    userName = new QLineEdit();
    passWord = new QLineEdit();
    visiblePassword = new QCheckBox("Hiện mật khẩu");

    loginButton = new QPushButton("Đăng nhập");

    //Cai dat phan title
    this->title->setAlignment(Qt::AlignCenter);
    this->title->setText("ĐĂNG NHẬP");
    this->title->setFont(QFont("Manhattan", 40, 100));
    QPalette *colorTitle = new QPalette();
    colorTitle->setColor(QPalette::WindowText, Qt::blue);
    colorTitle->setColor(QPalette::Window, Qt::red);
    this->title->setPalette(*colorTitle);

    //Cai dat phan username va password
    this->userName->setPlaceholderText("Tên đăng nhập");
    this->passWord->setPlaceholderText("Mật khẩu");
    this->loginBox->addRow("Username", userName);
    this->loginBox->addRow("Password", passWord);
    this->passWord->setEchoMode(QLineEdit::Password);

    this->loginBox->addWidget(visiblePassword);
    QObject::connect(this->visiblePassword, SIGNAL(clicked()), this, SLOT(showPassword()));

    //Cai dat nut Login
    this->loginButton->setToolTip("Nhấn để đăng nhập!");
    this->loginButton->setCursor(Qt::PointingHandCursor);
    this->loginButton->setAutoFillBackground(true);
    QPalette colorButtonLogin;
    colorButtonLogin.setColor(QPalette::Window, Qt::blue);
    this->loginButton->setPalette(colorButtonLogin);


    //Ghep cac thanh phan lai
    QPalette palette;
    this->regionLogin->setAutoFillBackground(true);
    palette.setColor(QPalette::Window, Qt::white);
    this->regionLogin->setPalette(palette);

    this->regionLoginLayout->addWidget(this->title);
    this->regionLoginLayout->addLayout(this->loginBox);
    this->regionLoginLayout->addWidget(this->loginButton);
    this->regionLogin->setLayout(this->regionLoginLayout);
    this->regionLogin->setFixedSize(400, 400);
    this->regionLoginLayout->setAlignment(Qt::AlignCenter);


    //Trung gian
    QHBoxLayout *tmp = new QHBoxLayout();
    tmp->addWidget(this->regionLogin);

    //Cua so login
    this->regionLogin->setFrameShape(QFrame::Panel);
    this->regionLogin->setFrameShadow(QFrame::Shadow::Raised);
    this->regionLogin->setLineWidth(3);
    this->regionLogin->setMidLineWidth(3);
    this->setLayout(tmp);
    this->setAlignment(Qt::AlignCenter);
    this->setWindowTitle("Login");
    this->setPixmap(QPixmap(":\\/\\Login_Backgroud.png"));
    this->showMaximized();
}

void LoginForm::showPassword() {
    if (visiblePassword->isChecked()) {
        this->passWord->setEchoMode(QLineEdit::Normal);
    }
    else {
        this->passWord->setEchoMode(QLineEdit::Password);
    }
}
