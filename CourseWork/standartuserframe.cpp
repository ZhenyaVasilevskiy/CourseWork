#include "standartuserframe.h"
#include "ui_standartuserframe.h"

StandartUserFrame::StandartUserFrame(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StandartUserFrame)
{
    ui->setupUi(this);
}

StandartUserFrame::~StandartUserFrame()
{
    delete ui;
}
