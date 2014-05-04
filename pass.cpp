#include "pass.h"
#include "ui_pass.h"
#include "proje.h"
#include "manager.h"
#include "reception.h"
#include "buymanager.h"

pass::pass(int s,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pass)
{
    ui->setupUi(this);
    connect(ui->okcase,SIGNAL(clicked()),this,SLOT(ok()));
    State = s ;
}

pass::~pass()
{
    delete ui;
}

void pass::ok(){
    if (State==0) {
        if (ui->passcode->text()=="1"){
            manager *m = new manager();
            m->setWindowTitle("مدیریت");
            m->show();
            close ();
        }

        else if (ui->passcode->text()=="2"){
                reception *n= new reception();
                n->setWindowTitle("پذیرش");
                n->show();
                close();
               }

        else if (ui->passcode->text()=="3"){
                buymanager *k= new buymanager ();
                k->setWindowTitle("مسئول خرید");
                k->show();
                close();
             }
        else {
            QMessageBox msg(this) ;
            msg.setText("انگار اشتباه شد:دی ");
            msg.exec();

        }
    }


    if (State==1) {
        if (ui->passcode->text()=="2"){
            reception *n= new reception();
            n->setWindowTitle("پذیرش");
            n->show();
            close();
        }
        else {
            QMessageBox msg(this) ;
            msg.setText("انگار اشتباه شد:دی ");
             msg.exec();

        }
    }
    if (State==2) {
        if (ui->passcode->text()=="3"){
            buymanager *n= new buymanager();
            n->setWindowTitle("مسئول خرید");
            n->show();
            close();
        }
        else {
            QMessageBox msg(this) ;
            msg.setText("انگار اشتباه شد ");
            msg.exec();

        }
    }

}





/*void pass::ok(){
    if (ui->passcode->text()=="1"){
        manager *m = new manager();
        m->setWindowTitle("مدیریت");
        m->show();
    }
    else if (ui->passcode->text()=="2"){
            reception *n= new reception();
            n->setWindowTitle("پذیرش");
            n->show();
           }
    else if (ui->passcode->text()=="3"){
                    buymanager *k= new buymanager ();
                    k->setWindowTitle("مسئول خرید");
                    k->show();
         }

    }*/

