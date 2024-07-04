#include "addcar.h"
#include "ui_addcar.h"
#include<QPixmap>
#include "QFile"
#include "QTextStream"
#include "qdebug.h"
#include<QMessageBox>

addcar::addcar(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addcar)
{
    ui->setupUi(this);
    QPixmap picture("C:/Users/shiva/OneDrive/Desktop/projects Qt5/car_booking/photos/photo");
    ui->pnglabel->setPixmap(picture);

    ui->carTypeListWidget->addItem("Mini");
    ui->carTypeListWidget->addItem("Sedan");
    ui->carTypeListWidget->addItem("SUV");
    ui->carTypeListWidget->addItem("Premium");

    ui->carTypeListWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    connect(ui->carTypeListWidget, &QListWidget::itemClicked, this, &addcar::on_carTypeListWidget_itemClicked);




}
addcar::~addcar()
{
    delete ui;
}

void addcar::on_exitButton_clicked()
{
    QApplication::exit();
}


void addcar::on_addCarButton_clicked()
{
    QVector<QString>carData;

    QString carNo = ui->carNoLineEdit->text();
    QString brand = ui->brandLineEdit->text();
    QString fare = ui->fareLineEdit->text();



    if(carNo.isEmpty() || brand.isEmpty() || fare.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill all fields.");
        return;
    }

    carData.append(carNo);
    carData.append(brand);
    carData.append(fare);

    QListWidgetItem *selectedCarType = ui->carTypeListWidget->currentItem();
    carData.append(selectedCarType->text());



        QFile file("carData.txt");

    if(file.open(QIODevice::Append | QIODevice::Text))
    {
        QTextStream stream(&file);
        for(const QString &data: carData)
        {
            stream << data<<" ";

        }
        stream<<"\n";
         file.close();
        qDebug() <<"Data Written into file Successfully";
         QMessageBox::information(this, "Success","Car Data added successfuly");
    }
    else
    {
        qDebug()<<"Could not open the file";
        QMessageBox::warning(this, "Error","Could not Open file");
    }




}


void addcar::on_carTypeListWidget_itemClicked(QListWidgetItem *item)
{

    item->setBackground(Qt::yellow);

    if(ui->carTypeListWidget->selectedItems().size()>1)
    {
        ui->carTypeListWidget->selectedItems().first()->setBackground(Qt::white);
    }

}


void addcar::on_backButton_clicked()
{
    this->close();
}

