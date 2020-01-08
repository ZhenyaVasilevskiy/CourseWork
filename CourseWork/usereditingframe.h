#ifndef USEREDITINGFRAME_H
#define USEREDITINGFRAME_H

#include <QDialog>

namespace Ui {
class UserEditingFrame;
}

class UserEditingFrame : public QDialog
{
    Q_OBJECT

public:
    explicit UserEditingFrame(QWidget *parent = nullptr);
    ~UserEditingFrame();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::UserEditingFrame *ui;
};

#endif // USEREDITINGFRAME_H
