#include "proje.h"
#include "ui_proje.h"
#include "pass.h"
#include <QDebug>

Proje::Proje(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Proje)
{

    //ui->label->setFrameStyle(QFrame::StyledPanel | QFrame::Panel);

        /*managerpass = new QLineEdit("password",this);
        managerpass->move(160 , 60);
        managerpass->hide() ;*/



    ui->setupUi(this);


    //connect(ui->manager , SIGNAL(clicked()) , this , SLOT(f())) ;

    //connect(ui->reception , SIGNAL(clicked()) , this , SLOT(f())) ;

    //connect(ui->buymanager , SIGNAL(clicked()) , this , SLOT(f())) ;
}


    Proje::~Proje()
    {
        delete ui;
    }

    void Proje::on_manager_clicked()
    {
        pass *window = new pass(0) ;
        window->setWindowTitle("رمز عبور");
        window->show();

    }

    void Proje::on_reception_clicked()
    {
        pass *window = new pass(1) ;
        window->setWindowTitle("رمز عبور");
        window->show();

    }

    void Proje::on_buymanager_clicked()
    {
        pass *window = new pass(2) ;
        window->setWindowTitle("رمز عبور");
        window->show();
    }





   /* void Proje:: f(){

        //managerpass->show();
        //if (managerpass->text()=="nesaze"){
        pass *window = new pass() ;
        window->setWindowTitle("رمز عبور");
        window->show();

}
*/










