/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QSpinBox *spinBox;
    QPushButton *GuessButton;
    QPushButton *StartOverButton;
    QLabel *MessageLabel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 30, 191, 21));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        spinBox = new QSpinBox(Widget);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(81, 71, 91, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(11);
        spinBox->setFont(font1);
        spinBox->setAlignment(Qt::AlignCenter);
        spinBox->setMinimum(1);
        spinBox->setMaximum(100);
        GuessButton = new QPushButton(Widget);
        GuessButton->setObjectName("GuessButton");
        GuessButton->setGeometry(QRect(219, 70, 81, 31));
        StartOverButton = new QPushButton(Widget);
        StartOverButton->setObjectName("StartOverButton");
        StartOverButton->setGeometry(QRect(339, 70, 81, 31));
        MessageLabel = new QLabel(Widget);
        MessageLabel->setObjectName("MessageLabel");
        MessageLabel->setGeometry(QRect(16, 130, 521, 41));
        MessageLabel->setFont(font);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Guess My Number", nullptr));
        GuessButton->setText(QCoreApplication::translate("Widget", "Guess", nullptr));
        StartOverButton->setText(QCoreApplication::translate("Widget", "Start Over", nullptr));
        MessageLabel->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
