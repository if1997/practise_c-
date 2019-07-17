#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPaintEvent>

#include <QMouseEvent>

#include <QVector>
#include <QPoint>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void virtual paintEvent(QPaintEvent *event);

private:
    Ui::Widget *ui;
    QVector<int> num;
};


#endif // WIDGET_H
