#include "bookcar.h"
#include "ui_bookcar.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QMessageBox>
#include<QPixmap>

QVector<QString>getAllCarDetails();

bookcar::bookcar(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::bookcar)
{
    ui->setupUi(this);
    QPixmap picture2("C:/Users/shiva/OneDrive/Desktop/projects Qt5/photos/pexels-pixabay-33488");
    ui->bookCarPicLabel->setPixmap(picture2);


    QVector<QString> carData = getAllCarDetails();
    for(int i = 0; i<carData.size(); i++)
    {
        ui->SelectCarTypeWidget->addItem(carData[i]);
    }

}

bookcar::~bookcar()
{
    delete ui;
}
void bookcar::on_ExitButton_clicked()
{
    QApplication::exit();
}


QVector<QString>getAllCarDetails()
{
    QVector<QString>getData;

    QFile file("carData.txt");

    if(file.open(QIODevice::ReadOnly | QIODevice::Text ))
    {
        QTextStream in(&file);
        while(!in.atEnd())
        {
            QString line = in.readLine();
            getData.append(line);
            qDebug()<<line;
        }
    }
    file.close();
    return getData;


}

void bookcar::on_BookCarButton_clicked()
{
    QVector<QString> bookCarDetails;

    bookCarDetails.append(ui->NameLineEdit->text());
    bookCarDetails.append(ui->AgeLineEdit->text());
    bookCarDetails.append(ui->PickupLineEdit->text());
    bookCarDetails.append(ui->DestinationLineEdit->text());

    bool male = ui->MaleRadioButton->isChecked();
    bool female = ui->FemaleRadioButton->isChecked();

    if(male)
    {
        bookCarDetails.append("Male");
    }
    else
    {
        bookCarDetails.append("Female");
    }

    QListWidgetItem *selectedCar = ui->SelectCarTypeWidget->currentItem();
    QString selectedCarDetails = selectedCar->text();
    bookCarDetails.append(selectedCarDetails);

    QFile file("bookCarData.txt");

    if(file.open(QIODevice::Append | QIODevice::Text))
    {
        QTextStream stream(&file);
        for(int i = 0; i<bookCarDetails.size(); i++)
        {
            stream <<bookCarDetails[i]<<" ";

        }
        stream<<"\n";
        file.close();
        qDebug() <<"Book Car Successfully";

    }

    //This will return the int value of current item you selected
    QModelIndex currentIndex = ui->SelectCarTypeWidget->currentIndex();
    int CurrentRow = currentIndex.row();



    //This will remove data of selected car by user by knowing the current row.
    QVector<QString>allcarData = getAllCarDetails();
    allcarData.remove(CurrentRow);



    //here rewrite the carData.txt file and remove that car details that are booked as "allcarData" file stored that cars that are not booked.
    QFile file2("carData.txt");

    if(file2.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream stream(&file2);
        for(int i = 0; i<allcarData.size(); i++)
        {
            stream <<allcarData[i]<<"\n";

        }

        file2.close();
    }
    QMessageBox::information(0, "Booking status","Booking Successful");

}




