#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT//元对象系统

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
private slots:
    void slotShow();
    void slotCount();
    void slotClear();
private:
    Ui::Widget *ui;
    int num;
    //QPushButton *btn;
};

#endif // WIDGET_H
