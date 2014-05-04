#include "reception.h"
#include "ui_reception.h"
#include <string>
#include <QDialog>


reception::reception(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::reception)

{
    ui->setupUi(this);

    db = QSqlDatabase ::addDatabase("QSQLITE");
    db.setDatabaseName("E:\\sqlite\\hotel.db");
    db.open();






    ui->tabWidget->setTabText(0,"اطلاعات اتاق ها");
    ui->tabWidget->setTabText(1,"اطلاعات مهمان ها");
    ui->tabWidget->setTabText(2,"فرم پذیرش");


    this->model =new QSqlTableModel();

    ui->room->setModel(model);





    mod= new QSqlTableModel(this);
    ui->customer->setModel(mod);
    model->setTable("room");

    mod->setQuery("SELECT * FROM customer");

    model->select();


    QString sQuery="INSERT INTO hesab values(:ferst,:last,:therd,:forth,:fift,:sixth,:seventh,:eight)";
    QSqlQuery qrt;
    qrt.prepare(sQuery);


    //mod->setHeaderData(0, Qt::Horizontal , QObject::tr("نام و نام خانوادگی"));
    //mod->setHeaderData(1, Qt::Horizontal , QObject::tr("شماره اتاق"));
    //mod->setHeaderData(2, Qt::Horizontal , QObject::tr("تاریخ ورود"));
    //mod->setHeaderData(3, Qt::Horizontal , QObject::tr("مدت اقامت"));
    //mod->setHeaderData(4, Qt::Horizontal , QObject::tr("هزینه"));


}



reception::~reception()
{
  delete ui;
}



/*void reception::on_buttonBox_clicked()
{
    QString sQuery="INSERT INTO customer values(:ferst,:last,:therd,:forth,:fift,:sixth,:seventh,:eight)";
    QSqlQuery qrt;
    qrt.prepare(sQuery);

    QString name = ui->name->text();
    qrt.bindValue(":ferst",name);
    QString Date =ui->lineEdit->text();
    qrt.bindValue(":last",Date );
    int LengthofStay =ui->lineEdit_2->text().toInt();
    qrt.bindValue(":therd",LengthofStay);
    int NationalCode=ui->Cardnumber->text().toInt();
    qrt.bindValue(":forth",NationalCode);
    int Id=ui->birthdaytime->text().toInt();
    qrt.bindValue(":fift",Id);
    int  Familymembers=ui->comboBox->currentText().toInt();
    qrt.bindValue(":sixth", Familymembers);
    int roomnumber=ui->lineEdit_4->text().toInt();
    qrt.bindValue(":seventh",roomnumber);
    int Cost=ui->lineEdit_3->text().toInt();
    qrt.bindValue(":eight",Cost);
    qrt.exec();


}*/

void reception::on_pushButton_clicked()
{
    QMessageBox msg(this) ;
    msg.setText("تایید شد :)");
    msg.exec();


    QString sQuery="INSERT INTO customer values(:ferst,:last,:therd,:forth,:fift,:sixth,:seventh,:eight)";
    QSqlQuery qrt;
    qrt.prepare(sQuery);

    QString name = ui->name->text();
    qrt.bindValue(":ferst",name);
    QString Date =ui->lineEdit->text();
    qrt.bindValue(":last",Date );
    int LengthofStay =ui->lineEdit_2->text().toInt();
    qrt.bindValue(":therd",LengthofStay);
    int NationalCode=ui->Cardnumber->text().toInt();
    qrt.bindValue(":forth",NationalCode);
    int Id=ui->birthdaytime->text().toInt();
    qrt.bindValue(":fift",Id);
    int  Familymembers=ui->comboBox->currentText().toInt();
    qrt.bindValue(":sixth", Familymembers);
    int roomnumber=ui->lineEdit_4->text().toInt();
    qrt.bindValue(":seventh",roomnumber);
    int Cost=ui->lineEdit_3->text().toInt();
    qrt.bindValue(":eight",Cost);
    qrt.exec();
    this->model =new QSqlTableModel();

    ui->room->setModel(model);





    mod= new QSqlTableModel(this);
    ui->customer->setModel(mod);
    model->setTable("room");

    mod->setQuery("SELECT * FROM customer");



}
