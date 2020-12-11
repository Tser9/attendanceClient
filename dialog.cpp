#include "dialog.h"
#include "ui_dialog.h"
bool s=false;
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    QString login =ui->lohin->text();
    QString passsword =ui->password->text();
    if (login=="st012345" && passsword=="QWE123")
    { s=true; QWidget::close();} else
    {ui->label_3->setText("Вы ввели неверные даные");}
}
