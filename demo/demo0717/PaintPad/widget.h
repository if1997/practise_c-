#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPainter>
#include <QPaintEvent>
#include <QPaintDevice>
#include <QMouseEvent>
#include <QVector>
#include <QColor>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);


private:
    Ui::Widget *ui;
   // QVector<QPoint> _line;
    QVector<QVector<QPoint> > _lines;
    int r,g,b;
    QVector<QColor> clr;
};

#endif // WIDGET_H
