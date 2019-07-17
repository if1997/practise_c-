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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton;
    QPushButton *btn_text;
    QLabel *label;
    QPushButton *btn_count;
    QLabel *label_count;
    QPushButton *btn_clear;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(668, 453);
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 30, 121, 71));
        btn_text = new QPushButton(Widget);
        btn_text->setObjectName(QStringLiteral("btn_text"));
        btn_text->setGeometry(QRect(510, 270, 101, 71));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 270, 411, 71));
        label->setFrameShape(QFrame::Panel);
        label->setFrameShadow(QFrame::Sunken);
        btn_count = new QPushButton(Widget);
        btn_count->setObjectName(QStringLiteral("btn_count"));
        btn_count->setGeometry(QRect(290, 80, 75, 51));
        label_count = new QLabel(Widget);
        label_count->setObjectName(QStringLiteral("label_count"));
        label_count->setGeometry(QRect(400, 80, 81, 51));
        label_count->setFrameShape(QFrame::Box);
        btn_clear = new QPushButton(Widget);
        btn_clear->setObjectName(QStringLiteral("btn_clear"));
        btn_clear->setGeometry(QRect(510, 80, 75, 51));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        btn_text->setText(QApplication::translate("Widget", "\346\230\276\347\244\272", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
        btn_count->setText(QApplication::translate("Widget", "count", Q_NULLPTR));
        label_count->setText(QApplication::translate("Widget", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
        btn_clear->setText(QApplication::translate("Widget", "clear", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
