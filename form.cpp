#include "form.h"
#include "ui_form.h"
#include "proje.h"
#include "manager.h"
#include "reception.h"

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    connect(ui->okpass,SIGNAL(clicked()),this,SLOT(ok()));

}

Form::~Form()
{
    delete ui;
}
void Form :: ok(){
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

    }
