#include "widget.h"
#include "ui_widget.h"
#include <QFont>
#include <QMessageBox>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    for (int i =1;i<=12;i++)
    {
        ui->comboBox_month->addItem(QString::asprintf("%d",i));
    }
    for(int i=1;i<=31;i++)
    {
        ui->comboBox_day->addItem(QString::asprintf("%d",i));
    }

    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(slot_shift()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::slot_shift()
{
    if(ui->comboBox_month->currentIndex()!=(0&&2&&4&&6&&7&&9&&11))
    {
        if(ui->comboBox_month->currentIndex()==1)
        {
            if (ui->comboBox_day->currentData()==29)
            {
                QMessageBox::warning(NULL,"warning","日期输入错误");
            }
        }
        if(ui->comboBox_day->currentIndex()==30)
        {
            QMessageBox::warning(NULL,"warning","日期输入错误");
        }
    }
    int month_index=ui->comboBox_month->currentIndex();
    int day_index=ui->comboBox_day->currentIndex();
    if((month_index=2 && day_index>20) || (month_index=3 && day_index<18))
    {
        ui->label_print->setText("白羊座");
    }
    else if((month_index=3 && day_index>19) || (month_index=4 && day_index<19))
    {
        ui->label_print->setText("金牛座");
    }
    else if((month_index=4 && day_index>20) || (month_index=5 && day_index<20))
    {
        ui->label_print->setText("双子座");
    }
    else if((month_index=5 && day_index>21) || (month_index=6 && day_index<21))
    {
        ui->label_print->setText("巨蟹座");
    }
    else if((month_index=6 && day_index>22) || (month_index=7 && day_index<21))
    {
        ui->label_print->setText("狮子座");
    }
    else if((month_index=7 && day_index>=22) || (month_index=3 && day_index<22))
    {
        ui->label_print->setText("处女座");
    }
    else if((month_index=9 && day_index>=22) || (month_index=10 && day_index<23))
    {
        ui->label_print->setText("天平座");
    }
    else if((month_index=10 && day_index>=23) || (month_index=11 && day_index<22))
    {
        ui->label_print->setText("天蝎座");
    }
    else if((month_index=10 && day_index>=22) || (month_index=11 && day_index<=20))
    {
        ui->label_print->setText("射手座");
    }
    else if((month_index=11 && day_index>=21) || (month_index=0 && day_index<=18))
    {
        ui->label_print->setText("魔蝎座");
    }
    else if((month_index=0 && day_index>=19) || (month_index=1 && day_index<=17))
    {
        ui->label_print->setText("水瓶座");
    }
    else if((month_index=1 && day_index>=18) || (month_index=3 && day_index<=19))
    {
        ui->label_print->setText("双鱼座");
    }

}

void Widget::paintEvent(QPaintEvent *event)
{
    QPainter p(this);
    p.setPen(QPen(Qt::blue,Qt::SolidLine,Qt::SquareCap,Qt::BevelJoin));
    double val=(offsetX-150)*(offsetX-150)+(offsetY-100)*(offsetY-100);
    if(val<r*r && click)
    {
        p.setBrush(Qt::gray);
    }
    else
    {
        p.setBrush(Qt::white);
    }

    //p.drawLine(0,0,100,100);
    p.drawEllipse(QPoint(150,100),45,45);
}

void Widget::mousePressEvent(QMouseEvent *event)
{
    if (event->button()==Qt::LeftButton)
    {
        this->setWindowTitle("sus");
        click=true;
        offsetX=event->x();
        offsetY=event->y();
        QString str_x=QString::number(event->x());
        QString str_y=QString::number(event->y());
        QString text=str_x+","+str_y;
        ui->label_print->setText(text);
    }
}

void Widget::mouseMoveEvent(QMouseEvent *event)
{
    this->setWindowTitle("sus");

    QString str_x=QString::number(event->x());
    QString str_y=QString::number(event->y());
    QString text=str_x+","+str_y;
    ui->label_print->setText(text);
}


void Widget::mouseReleaseEvent(QMouseEvent *event)
{
    //offsetX=offsetY=0;
    click=false;
    update();
}
