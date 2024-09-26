#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>

class LoginWindow : public QWidget {
    Q_OBJECT

public:
    LoginWindow(QWidget *parent = nullptr);

private slots:
    void handleLogin();

private:
    QLineEdit *passwordField;
    QPushButton *loginButton;
};

#endif // LOGINWINDOW_H
