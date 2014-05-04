#include "password.h"
#include "ui_password.h"
#include "proje.h"
#include "manager.h"
#include "reception.h"
#include "buymanager.h"

password::password(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::password)
{
    ui->setupUi(this);

    connect(ui->okpass,SIGNAL(clicked()),this,SLOT(ok()));

}

password::~password()
{
    delete ui;
}
void password::ok(){
    if (ui->passmanager->text()=="1"){
        manager *m = new manager();
        m->setWindowTitle("مدیریت");
        m->show();
    }

    else if (ui->passmanager->text()=="2"){
            reception *n= new reception ();
            n->setWindowTitle("پذیرش");
            n->show();
           }
    else if (ui->passmanager->text()=="3"){
                    buymanager *k= new buymanager ();
                    k->setWindowTitle("مسئول خرید");
                    k->show();
         }

    }
