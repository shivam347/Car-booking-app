#ifndef ADDCAR_H
#define ADDCAR_H

#include <QDialog>
#include<QListWidgetItem>



namespace Ui {
class addcar;
}

class addcar : public QDialog
{
    Q_OBJECT

public:
    explicit addcar(QWidget *parent = nullptr);
    ~addcar();

private slots:
    void on_exitButton_clicked();

    void on_addCarButton_clicked();

    void on_carTypeListWidget_itemClicked(QListWidgetItem *item);

    void on_backButton_clicked();

private:
    Ui::addcar *ui;


};

#endif // ADDCAR_H
