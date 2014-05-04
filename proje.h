#ifndef PROJE_H
#define PROJE_H

#include <QMainWindow>
#include <QLineEdit>

namespace Ui {
class Proje;
}

class Proje : public QMainWindow
{
    Q_OBJECT

public:
    explicit Proje(QWidget *parent = 0);
    ~Proje();
    QLineEdit *managerpass ;

private:
    Ui::Proje *ui;


private slots :

    void on_manager_clicked();
    void on_reception_clicked();
    void on_buymanager_clicked();

};

#endif // PROJE_H
