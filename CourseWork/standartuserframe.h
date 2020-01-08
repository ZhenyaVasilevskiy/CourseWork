#ifndef STANDARTUSERFRAME_H
#define STANDARTUSERFRAME_H

#include <QDialog>

namespace Ui {
class StandartUserFrame;
}

class StandartUserFrame : public QDialog
{
    Q_OBJECT

public:
    explicit StandartUserFrame(QWidget *parent = nullptr);
    ~StandartUserFrame();

private:
    Ui::StandartUserFrame *ui;
};

#endif // STANDARTUSERFRAME_H
