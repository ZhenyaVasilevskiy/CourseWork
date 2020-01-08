#include "usereditingframe.h"
#include "ui_usereditingframe.h"
#include "searchbtn.h"
#include <iostream>
//#include ""
#include <fstream>

UserEditingFrame::UserEditingFrame(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserEditingFrame)
{
    ui->setupUi(this);
    ui->UsersTable->setColumnCount(3);
    QStringList table_names;
    table_names << "Логин" << "Пароль" << "Режим доступа";
    ui->UsersTable->setHorizontalHeaderLabels(table_names);
    std::ifstream InputFile;
    InputFile.open("Users.txt", std::ios::in);
    int j = 0;
    if (InputFile.is_open()){
        int Temp = 0;
        while (!InputFile.eof()){
                         ui->UsersTable->setRowCount(j + 1);
                         int i = 0;
                         QTableWidgetItem *item = new QTableWidgetItem();
                         std::string temp;
                         InputFile >>temp;
                              QString qstr = QString::fromStdString(temp);
                              item->setText(qstr);
                              ui->UsersTable->setItem(j, i, new QTableWidgetItem(qstr));  i++;
                         InputFile >>temp; // ui->UsersTable->setItem(j,i, new QTableWidgetItem(tr("%2").arg(temp)));  i++;
                              qstr = QString::fromStdString(temp);
                              item->setText(qstr);
                              ui->UsersTable->setItem(j, i, new QTableWidgetItem(qstr));  i++;
                         InputFile >> Temp; ui->UsersTable->setItem(j, i, new QTableWidgetItem(tr("%1").arg(Temp)));  i++;
               i++; j++;
        }
        ui->UsersTable->setRowCount(j - 1);
    }
}

UserEditingFrame::~UserEditingFrame()
{
    delete ui;
}

void UserEditingFrame::on_pushButton_clicked()
{

}

void UserEditingFrame::on_pushButton_3_clicked()
{
    ui->setupUi(this);
//    std::string  = ui->PasswordEdit->setText("");
//    if (User.CheckUser()){
//        ui->PasswordEdit->setText("");

//        if (User.GetMode()){
//            adminFrame window;
//            window.setModal(true);
//            window.exec();
//        } else {
//            StandartUserFrame window;
//            window.setModal(true);
//            window.exec();
//        }
//    SearchBTN window;
//    window.setModal(true);
//    window.exec();

}
