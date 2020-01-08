#include "adminframe.h"
#include "ui_adminframe.h"
#include "usereditingframe.h"

adminFrame::adminFrame(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminFrame)
{
    ui->setupUi(this);
}

adminFrame::~adminFrame()
{
    delete ui;
}

void adminFrame::on_pushButton_clicked()
{
    UserEditingFrame window;
    window.setModal(true);
    window.exec();
}

void adminFrame::on_pushButton_3_clicked()
{
//    UserEditingFrame window;
//    window.setModal(true);
//    window.exec();
}
