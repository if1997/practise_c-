#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include <QPixmap>

#include <QPaintEvent>
#include <QPainter>
#include <QPaintEngine>
#include <QPaintDevice>

#include <QMouseEvent>


#include <QVector>
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
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);


public slots:
    void slot_shift();

private:
    Ui::Widget *ui;
    double offsetX;
    double offsetY;
    double r;
    bool click;
};

#endif // WIDGET_H
