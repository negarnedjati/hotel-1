#include "buymanager.h"
#include "ui_buymanager.h"
#include <string>
#include <QDialog>
#include <QMessageBox>

buymanager::buymanager(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::buymanager)
{
    ui->setupUi(this);


    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("E:\\sqlite\\hotel.db");
    db.open();

    ui->tabWidget->setTabText(0 ," جدول مالی");
    ui->tabWidget->setTabText(1,"ورود اطلاعات مالی");


    model= new QSqlQueryModel(this);
    model->setQuery("SELECT * FROM hesab");
    ui->tableView->setModel(model);
    QString sQuery="INSERT INTO hesab values(:ferst,:last,:therd,:forth,:fift,:sixth,:seventh)";


    QSqlQuery qrt;
    qrt.prepare(sQuery);
}

void buymanager::on_pushButton_clicked()
{
    QMessageBox msg(this) ;
    msg.setText("تایید شد :)");
    msg.exec();

QString sQuery="INSERT INTO hesab values(:ferst,:last,:therd,:forth,:fift,:sixth,:seventh)";

QSqlQuery qrt;
qrt.prepare(sQuery);

QString reason = ui->lineEdit->text();
qrt.bindValue(":ferst",reason);
QString Dateofcontract =ui->Dateofcontract->text();
qrt.bindValue(":last",Dateofcontract );
int price =ui->lineEdit_2->text().toInt();
qrt.bindValue(":therd",price);
QString Dateofpyment=ui->Dateofpyment->text();
qrt.bindValue(":forth",Dateofpyment);
int discount=ui->lineEdit_3->text().toInt();
qrt.bindValue(":fift",discount);
qrt.bindValue(":sixth","F");
qrt.bindValue(":seventh","T");
qrt.exec();
model= new QSqlQueryModel(this);
model->setQuery("SELECT * FROM hesab");
ui->tableView->setModel(model);
}


void buymanager::on_pushButton_2_clicked()
{
    QMessageBox msg(this) ;
    msg.setText("تایید شد :)");
    msg.exec();

QString sQuery="INSERT INTO hesab values(:ferst,:last,:therd,:forth,:fift,:sixth,:seventh)";
QSqlQuery qrt;
qrt.prepare(sQuery);

QString reason = ui->lineEdit_4->text();
qrt.bindValue(":ferst",reason);
QString Dateofcontract =ui->Dateofcontract_2->text();
qrt.bindValue(":last",Dateofcontract );
int price =ui->lineEdit_5->text().toInt();
qrt.bindValue(":therd",price);
QString Dateofpyment=ui->Dateofpyment_2->text();
qrt.bindValue(":forth",Dateofpyment);
int discount=ui->lineEdit_6->text().toInt();
qrt.bindValue(":fift",discount);
qrt.bindValue(":sixth","T");
qrt.bindValue(":seventh","F");
qrt.exec();
model= new QSqlQueryModel(this);
model->setQuery("SELECT * FROM hesab");
ui->tableView->setModel(model);

}

buymanager::~buymanager()
{
    db.close();
    delete ui;
}




