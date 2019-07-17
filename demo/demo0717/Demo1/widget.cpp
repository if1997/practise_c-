#include "widget.h"
#include "ui_widget.h"
#include <QFont>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->pushButton->setText("关闭");
    num=0;
#if 0
    btn = new QPushButton;
    btn->setGeometry(0,0,50,100);
    btn->setText("Show");
    btn->setParent(this);
    btn->show();
#endif
    //信号槽的注册，提前约定发送信号的人，发送的什么信号
    //，接受信号的人，如何处理信号
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(close()));

    connect(ui->btn_text,SIGNAL(clicked(bool)),this,SLOT(slotShow()));

    ui->label->setFont(QFont("黑体",16));
    ui->label_count->setFont(QFont("黑体",16));

    connect(ui->btn_count,SIGNAL(clicked(bool)),this,SLOT(slotCount()));
    connect(ui->btn_clear,SIGNAL(clicked(bool)),this,SLOT(slotClear()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::slotShow()
{
    QString str = "Hello Qt";
    ui->label->setText(str);

}

void Widget::slotCount()
{
    num++;
    QString text = QString::number(num);
    ui->label_count->setText(text);


}

void Widget::slotClear()
{
    ui->label_count->clear();
    num=0;
}





