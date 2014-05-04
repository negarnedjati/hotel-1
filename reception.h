#ifndef RECEPTION_H
#define RECEPTION_H

#include <QWidget>
#include <QtCore> //vase table
#include <QtGui> //vase table
#include <QModelIndex>
#include <QtSql>
#include <QMessageBox>




namespace Ui {
class reception;
}

class reception : public QWidget
{
    Q_OBJECT

public:
    explicit reception(QWidget *parent = 0);
    ~reception();

private slots:
    //void on_columnView_activated(const QModelIndex &index);

   // void on_lineEdit_cursorPositionChanged(int arg1, int arg2);

   // void on_buttonBox_clicked();

    void on_pushButton_clicked();

private:
    Ui::reception *ui;
    QSqlDatabase db;
    QSqlTableModel *model;
    QSqlQueryModel *mod;
};

#endif // RECEPTION_H
