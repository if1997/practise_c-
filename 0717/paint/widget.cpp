#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    for (int i=0;i<100;i++)
    {
        num.append(i);
    }
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    QPainter p(this);
    p.setPen(QPen(Qt::blue,1.0,Qt::SolidLine,Qt::SquareCap,Qt::BevelJoin));
    for (int i=0;i<(num.size()/4);i++)
    {
        p.drawLine(num.back(),num.back(),num.back(),num.back());
        p.setPen(QPen(Qt::red));
    }

}
