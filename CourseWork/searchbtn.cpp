#include "searchbtn.h"
#include "ui_searchbtn.h"
#include "user.h"

SearchBTN::SearchBTN(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchBTN)
{

}

SearchBTN::~SearchBTN()
{
    delete ui;
}
