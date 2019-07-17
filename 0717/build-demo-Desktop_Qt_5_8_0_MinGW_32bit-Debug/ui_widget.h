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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label_print;
    QPushButton *pushButton;
    QLabel *label_month;
    QLabel *label_day;
    QComboBox *comboBox_month;
    QComboBox *comboBox_day;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 300);
        label_print = new QLabel(Widget);
        label_print->setObjectName(QStringLiteral("label_print"));
        label_print->setGeometry(QRect(290, 20, 101, 41));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 20, 75, 51));
        label_month = new QLabel(Widget);
        label_month->setObjectName(QStringLiteral("label_month"));
        label_month->setGeometry(QRect(10, 10, 54, 16));
        label_day = new QLabel(Widget);
        label_day->setObjectName(QStringLiteral("label_day"));
        label_day->setGeometry(QRect(100, 10, 54, 12));
        comboBox_month = new QComboBox(Widget);
        comboBox_month->setObjectName(QStringLiteral("comboBox_month"));
        comboBox_month->setGeometry(QRect(0, 30, 69, 22));
        comboBox_day = new QComboBox(Widget);
        comboBox_day->setObjectName(QStringLiteral("comboBox_day"));
        comboBox_day->setGeometry(QRect(80, 30, 69, 22));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label_print->setText(QString());
        pushButton->setText(QApplication::translate("Widget", "\350\275\254\346\215\242", Q_NULLPTR));
        label_month->setText(QApplication::translate("Widget", "month", Q_NULLPTR));
        label_day->setText(QApplication::translate("Widget", "day", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
