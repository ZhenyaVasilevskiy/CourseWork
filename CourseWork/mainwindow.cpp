#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "adminframe.h"
#include "standartuserframe.h"
#include "user.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_RegBTN_clicked()
{
    if ((ui->LoginEdit->text().length() == 0) || (ui->PasswordEdit->text().length() == 0)){
         QMessageBox::critical(this, "Ошибка", "Заполните все поля");
    } else {
        user User = user(ui->LoginEdit->text().toStdString(), ui->PasswordEdit->text().toStdString());
        if (!User.CheckUserForReg()){
                  if (!User.SaveUser()){
                         QMessageBox::critical(this, "Ошибка", "файл");
                  }else{
                        StandartUserFrame window;
                        window.setModal(true);
                        window.exec();
                  }
        } else {
           QMessageBox::critical(this, "Ошибка", "Данный пользователь уже существует!");
        }
    }
}


void MainWindow::on_LoginBTN_clicked()
{
    if ((ui->LoginEdit->text().length() == 0) || (ui->PasswordEdit->text().length() == 0)){
         QMessageBox::critical(this, "Ошибка", "Заполните все поля");
    } else {
        user User = user(ui->LoginEdit->text().toStdString(), ui->PasswordEdit->text().toStdString());
        if (User.CheckUser()){
            ui->LoginEdit->setText("");
            ui->PasswordEdit->setText("");
            if (User.GetMode()){
                adminFrame window;
                window.setModal(true);
                window.exec();
            } else {
                StandartUserFrame window;
                window.setModal(true);
                window.exec();
            }
        } else {
             QMessageBox::critical(this, "Ошибка", "Пользователь не найден!");
        }
    }
}

