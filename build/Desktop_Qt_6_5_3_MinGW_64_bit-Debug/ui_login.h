/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *useridLabel;
    QLabel *passwordLabel;
    QLineEdit *useridLineEdit;
    QLineEdit *passwordLineEdit;
    QPushButton *loginButton;
    QPushButton *exitButton;
    QLabel *label;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(1318, 701);
        centralwidget = new QWidget(login);
        centralwidget->setObjectName("centralwidget");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(940, 20, 261, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Black")});
        font.setPointSize(22);
        font.setBold(true);
        label_2->setFont(font);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(920, 20, 291, 71));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border:5px solid black;\n"
"border-radius:10px"));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(810, 130, 501, 511));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color:grey;\n"
"border-radius:10px;\n"
"border:3px solid black;"));
        useridLabel = new QLabel(centralwidget);
        useridLabel->setObjectName("useridLabel");
        useridLabel->setGeometry(QRect(860, 170, 161, 81));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        useridLabel->setFont(font1);
        useridLabel->setStyleSheet(QString::fromUtf8("color:white;"));
        passwordLabel = new QLabel(centralwidget);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setGeometry(QRect(860, 330, 191, 41));
        passwordLabel->setFont(font1);
        passwordLabel->setStyleSheet(QString::fromUtf8("color:white;"));
        useridLineEdit = new QLineEdit(centralwidget);
        useridLineEdit->setObjectName("useridLineEdit");
        useridLineEdit->setGeometry(QRect(860, 250, 361, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Microsoft YaHei")});
        font2.setPointSize(14);
        font2.setBold(true);
        useridLineEdit->setFont(font2);
        passwordLineEdit = new QLineEdit(centralwidget);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setGeometry(QRect(860, 390, 361, 51));
        passwordLineEdit->setFont(font2);
        passwordLineEdit->setEchoMode(QLineEdit::Password);
        loginButton = new QPushButton(centralwidget);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(870, 480, 111, 41));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        loginButton->setFont(font3);
        loginButton->setStyleSheet(QString::fromUtf8("background-color:green;\n"
"border-radius:12px;\n"
"border:3px solid black;"));
        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(1020, 480, 111, 41));
        exitButton->setFont(font3);
        exitButton->setStyleSheet(QString::fromUtf8("background-color:red;\n"
"border-radius:10px;\n"
"border:3px solid black;"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 0, 1321, 741));
        label->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/car.jpg")));
        label->setScaledContents(true);
        login->setCentralWidget(centralwidget);
        label->raise();
        label_2->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        useridLabel->raise();
        passwordLabel->raise();
        useridLineEdit->raise();
        passwordLineEdit->raise();
        loginButton->raise();
        exitButton->raise();

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "login", nullptr));
        label_2->setText(QCoreApplication::translate("login", "Car Booking", nullptr));
        useridLabel->setText(QCoreApplication::translate("login", "User ID :", nullptr));
        passwordLabel->setText(QCoreApplication::translate("login", "Password : ", nullptr));
        loginButton->setText(QCoreApplication::translate("login", "login", nullptr));
        exitButton->setText(QCoreApplication::translate("login", "Exit", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
