#include "manager.h"
#include "ui_manager.h"
#include <string>
#include <QDialog>

manager::manager(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::manager)
{
    ui->setupUi(this);



    db = QSqlDatabase ::addDatabase("QSQLITE");
    db.setDatabaseName("E:\\sqlite\\hotel.db");
    db.open();

    ui->tabWidget->setTabText(0 ," امور مالی");
    ui->tabWidget->setTabText(1,"کارکنان");


    this -> model= new QSqlQueryModel();
    mod= new QSqlTableModel(this);
    model->setQuery("SELECT [price], [Date of payment] ,[Reception], [Payment] FROM hesab");
    ui->personnel->setModel(model);
    mod->setTable("perssonal");
    mod->select();

    ui->personnel_2->setModel(mod);



}

manager::~manager()
{
    db.close();
    delete ui;
}

