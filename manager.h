#ifndef MANAGER_H
#define MANAGER_H

#include <QWidget>
#include <QtCore> //vase table
#include <QtGui> //vase tablet
#include <QModelIndex>
#include <QStandardItemModel>
#include <QtSql>

namespace Ui {
class manager;
}

class manager : public QWidget
{
    Q_OBJECT

public:
    explicit manager(QWidget *parent = 0);
    //char l[2] = {"hazineh","daramad"};
    ~manager();

private:
    Ui::manager *ui;
    QSqlDatabase db;
    QSqlQueryModel *model;
    QSqlTableModel *mod;



};

#endif // MANAGER_H
