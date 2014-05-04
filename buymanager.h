#ifndef BUYMANAGER_H
#define BUYMANAGER_H

#include <QWidget>
#include <QtCore> //vase table
#include <QtGui> //vase tablet
#include <QModelIndex>
#include <QStandardItemModel>
#include <QtSql>
#include <QMessageBox>

namespace Ui {
class buymanager;
}

class buymanager : public QWidget
{
    Q_OBJECT

public:
    explicit buymanager(QWidget *parent = 0);
    ~buymanager();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::buymanager *ui;

    QSqlDatabase db;
    QSqlQueryModel *model;

};

#endif // BUYMANAGER_H
