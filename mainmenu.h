#ifndef MAINMENU_H
#define MAINMENU_H
#include "addcar.h"
#include "bookcar.h"

#include <QDialog>

namespace Ui {
class mainmenu;
}

class mainmenu : public QDialog
{
    Q_OBJECT

public:
    explicit mainmenu(QWidget *parent = nullptr);
    ~mainmenu();

private slots:
    void on_addCarButton_clicked();

    void on_loginButton_3_clicked();

    void on_exitButton_clicked();

    void on_bookCarButton_clicked();

private:
    Ui::mainmenu *ui;
    addcar addcarUi;
    bookcar bookcarUi;
};

#endif // MAINMENU_H
