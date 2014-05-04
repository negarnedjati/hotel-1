#ifndef PASSWORD_H
#define PASSWORD_H

#include <QWidget>

namespace Ui {
class password;
}

class password : public QWidget
{
    Q_OBJECT

public:
    explicit password(QWidget *parent = 0);
    ~password();

private:
    Ui::password *ui;
private slots:
    void ok();
} ;

#endif // PASSWORD_H
