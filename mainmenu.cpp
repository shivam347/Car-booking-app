#include "mainmenu.h"
#include "ui_mainmenu.h"
#include <QPixmap>

mainmenu::mainmenu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::mainmenu)
{
    ui->setupUi(this);
    QPixmap six("C:/Users/shiva/OneDrive/Desktop/projects Qt5/car_booking/photos/Qt photo");
    ui->pic_label->setPixmap(six);

}

mainmenu::~mainmenu()
{
    delete ui;
}

void mainmenu::on_addCarButton_clicked()
{
    addcarUi.show();
}


void mainmenu::on_loginButton_3_clicked()
{
    QApplication::exit();
}


void mainmenu::on_exitButton_clicked()
{
    QApplication::exit();
}


void mainmenu::on_bookCarButton_clicked()
{
    bookcarUi.show();
}

