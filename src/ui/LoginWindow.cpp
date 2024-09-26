#include "LoginWindow.h"
#include <QVBoxLayout>
#include <QMessageBox>

LoginWindow::LoginWindow(QWidget *parent) : QWidget(parent) {
    QVBoxLayout *layout = new QVBoxLayout(this);

    passwordField = new QLineEdit(this);
    passwordField->setEchoMode(QLineEdit::Password);
    loginButton = new QPushButton("Login", this);

    layout->addWidget(passwordField);
    layout->addWidget(loginButton);

    connect(loginButton, &QPushButton::clicked, this, &LoginWindow::handleLogin);
}

void LoginWindow::handleLogin() {
    QString password = passwordField->text();
    if (password == "masterPassword") {  // Placeholder validation
        QMessageBox::information(this, "Login", "Login successful!");
    } else {
        QMessageBox::warning(this, "Login", "Incorrect password!");
    }
}
