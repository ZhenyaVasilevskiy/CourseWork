#ifndef ADMINFRAME_H
#define ADMINFRAME_H

#include <QDialog>

namespace Ui {
class adminFrame;
}

class adminFrame : public QDialog
{
    Q_OBJECT

public:
    explicit adminFrame(QWidget *parent = nullptr);
    ~adminFrame();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::adminFrame *ui;
};

#endif // ADMINFRAME_H
