#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    pix = new QPixmap(":/xian_Metro.png");
    ui->label->setPixmap(*pix);
    ui->label->setScaledContents(true);
}

Widget::~Widget()
{
    delete ui;
}
