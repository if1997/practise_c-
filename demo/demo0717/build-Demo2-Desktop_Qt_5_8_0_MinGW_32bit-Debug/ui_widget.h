/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QComboBox *comboBox;
    QLineEdit *lineEdit_first;
    QLineEdit *lineEdit_second;
    QPushButton *btn_calc;
    QLabel *label;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(465, 83);
        comboBox = new QComboBox(Widget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(100, 10, 69, 61));
        lineEdit_first = new QLineEdit(Widget);
        lineEdit_first->setObjectName(QStringLiteral("lineEdit_first"));
        lineEdit_first->setGeometry(QRect(20, 10, 61, 61));
        lineEdit_second = new QLineEdit(Widget);
        lineEdit_second->setObjectName(QStringLiteral("lineEdit_second"));
        lineEdit_second->setGeometry(QRect(190, 10, 61, 61));
        btn_calc = new QPushButton(Widget);
        btn_calc->setObjectName(QStringLiteral("btn_calc"));
        btn_calc->setGeometry(QRect(270, 20, 61, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(18);
        btn_calc->setFont(font);
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(360, 10, 91, 61));
        label->setFrameShape(QFrame::Panel);
        label->setFrameShadow(QFrame::Sunken);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        btn_calc->setText(QApplication::translate("Widget", "=", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
