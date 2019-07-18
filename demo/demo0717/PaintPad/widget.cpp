#include "widget.h"
#include "ui_widget.h"
#include <QTime>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    qsrand(QTime::currentTime().msec());
    QPalette plat = this->palette();
    plat.setColor(QPalette::Background,Qt::white);
    this->setPalette(plat);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::mousePressEvent(QMouseEvent *event)
{

   // _line.append(event->pos());  绘制一条线
  /*
    QVector<QPoint> tmpLine;
   tmpLine.append(event->pos());
   _lines.append(tmpLine);*/
     QVector<QPoint> tmpLine;
     _lines.append(tmpLine);
     QVector<QPoint>& lastLine = _lines.last();
     lastLine.append(event->pos());
     r = qrand()%256;
     g = qrand()%256;
     b = qrand()%256;
     QColor clrt(r,g,b);
     clr.append(clrt);

}
void Widget::mouseMoveEvent(QMouseEvent *event)
{
   //_line.append(event->pos());
    QVector<QPoint>& lastLine = _lines.last();
    lastLine.append(event->pos());
   update();
}
void Widget::mouseReleaseEvent(QMouseEvent *event)
{
   // _line.append(event->pos());
   QVector<QPoint>& lastLine = _lines.last();
   lastLine.append(event->pos());

}
void Widget::paintEvent(QPaintEvent *event)
{
    QPainter p(this);



    /*
    for(int i=0;i<_line.size()-1;i++)
    {
        p.drawLine(_line.at(i),_line.at(i+1));

    }*/
    for(int i=0;i<_lines.size();++i)
    {
        const QVector<QPoint>& line = _lines.at(i);//取出第i条线
        const QColor& myClr = clr.at(i);
        p.setPen(QPen(myClr,6));
        for(int j=0;j<line.size()-1;++j)//将线中的点连起来绘制
        {
            p.drawLine(line.at(j),line.at(j+1));
        }
    }



}
