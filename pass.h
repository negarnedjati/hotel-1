#ifndef PASS_H
#define PASS_H

#include <QWidget>
#include <QMessageBox>

namespace Ui {
class pass;
}

class pass : public QWidget
{
    Q_OBJECT

public:
    explicit pass(int ,QWidget *parent = 0);
    ~pass();
    int State;

private:
    Ui::pass *ui;

private slots:
    void ok();
};

#endif // PASS_H
