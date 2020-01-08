#ifndef SEARCHBTN_H
#define SEARCHBTN_H

#include <QDialog>

namespace Ui {
class SearchBTN;
}

class SearchBTN : public QDialog
{
    Q_OBJECT

public:
    explicit SearchBTN(QWidget *parent = nullptr);
    ~SearchBTN();

private:
    Ui::SearchBTN *ui;
};

#endif // SEARCHBTN_H
