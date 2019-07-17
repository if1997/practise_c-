#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->lineEdit_first->setFont(QFont("黑体",16));
    ui->lineEdit_second->setFont(QFont("黑体",16));
    ui->label->setFont(QFont("黑体",16));
    ui->comboBox->setFont(QFont("黑体",16));
    ui->comboBox->addItem("+");
    ui->comboBox->addItem("-");
    ui->comboBox->addItem("*");
    ui->comboBox->addItem("/");

    connect(ui->btn_calc,SIGNAL(clicked(bool)),this,SLOT(slotCalc()));



}

Widget::~Widget()
{
    delete ui;
}
void Widget::slotCalc()
{
    int x,y;
    int z;

    x = ui->lineEdit_first->text().toInt();
    y = ui->lineEdit_second->text().toInt();
    if(ui->comboBox->currentIndex()==0)
    {
         z = x+y;
         ui->label->setText( QString::number(z));
    }
    else
        if(ui->comboBox->currentIndex()==1)
        {
             z = x-y;
             ui->label->setText( QString::number(z));
        }
    else
            if(ui->comboBox->currentIndex()==2)
            {
                z = x*y;
                ui->label->setText( QString::number(z));

            }
    else
            {
                double z1;
                if(y==0)
                {
                    QMessageBox::warning(this,"警告","除数不能为0");
                    //return;

                }
                else
                {
                z1 = (double)x/y;
                ui->label->setText( QString::number(z1));
                }

            }
}












