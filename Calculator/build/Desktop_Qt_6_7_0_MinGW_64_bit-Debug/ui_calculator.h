/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *Multiply;
    QPushButton *Button7;
    QPushButton *MemAdd;
    QPushButton *Button6;
    QPushButton *ChangeSign;
    QPushButton *Button2;
    QPushButton *MemGet;
    QPushButton *Button5;
    QPushButton *Button8;
    QPushButton *Button0;
    QPushButton *Button9;
    QPushButton *Button1;
    QPushButton *Clear;
    QPushButton *Divide;
    QPushButton *MemClear;
    QLabel *label;
    QPushButton *Button3;
    QPushButton *Button4;
    QPushButton *Equals;
    QPushButton *Subtract;
    QPushButton *Add;
    QLineEdit *Display;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName("Calculator");
        Calculator->resize(801, 600);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        Multiply = new QPushButton(centralwidget);
        Multiply->setObjectName("Multiply");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(23);
        font.setBold(true);
        Multiply->setFont(font);
        Multiply->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF7F50;\n"
"}"));

        gridLayout->addWidget(Multiply, 3, 3, 1, 1);

        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName("Button7");
        sizePolicy.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy);
        Button7->setFont(font);

        gridLayout->addWidget(Button7, 2, 0, 1, 1);

        MemAdd = new QPushButton(centralwidget);
        MemAdd->setObjectName("MemAdd");
        sizePolicy.setHeightForWidth(MemAdd->sizePolicy().hasHeightForWidth());
        MemAdd->setSizePolicy(sizePolicy);
        MemAdd->setFont(font);
        MemAdd->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF7F50;\n"
"}"));

        gridLayout->addWidget(MemAdd, 2, 4, 1, 1);

        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName("Button6");
        sizePolicy.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy);
        Button6->setFont(font);

        gridLayout->addWidget(Button6, 3, 2, 1, 1);

        ChangeSign = new QPushButton(centralwidget);
        ChangeSign->setObjectName("ChangeSign");
        sizePolicy.setHeightForWidth(ChangeSign->sizePolicy().hasHeightForWidth());
        ChangeSign->setSizePolicy(sizePolicy);
        ChangeSign->setFont(font);

        gridLayout->addWidget(ChangeSign, 5, 2, 1, 1);

        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName("Button2");
        sizePolicy.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy);
        Button2->setFont(font);

        gridLayout->addWidget(Button2, 4, 1, 1, 1);

        MemGet = new QPushButton(centralwidget);
        MemGet->setObjectName("MemGet");
        sizePolicy.setHeightForWidth(MemGet->sizePolicy().hasHeightForWidth());
        MemGet->setSizePolicy(sizePolicy);
        MemGet->setFont(font);
        MemGet->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF7F50;\n"
"}"));

        gridLayout->addWidget(MemGet, 4, 4, 1, 1);

        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName("Button5");
        sizePolicy.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy);
        Button5->setFont(font);

        gridLayout->addWidget(Button5, 3, 1, 1, 1);

        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName("Button8");
        sizePolicy.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy);
        Button8->setFont(font);

        gridLayout->addWidget(Button8, 2, 1, 1, 1);

        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName("Button0");
        sizePolicy.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy);
        Button0->setFont(font);

        gridLayout->addWidget(Button0, 5, 1, 1, 1);

        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName("Button9");
        sizePolicy.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy);
        Button9->setFont(font);

        gridLayout->addWidget(Button9, 2, 2, 1, 1);

        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName("Button1");
        sizePolicy.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy);
        Button1->setFont(font);

        gridLayout->addWidget(Button1, 4, 0, 1, 1);

        Clear = new QPushButton(centralwidget);
        Clear->setObjectName("Clear");
        sizePolicy.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy);
        Clear->setFont(font);

        gridLayout->addWidget(Clear, 5, 0, 1, 1);

        Divide = new QPushButton(centralwidget);
        Divide->setObjectName("Divide");
        sizePolicy.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy);
        Divide->setFont(font);
        Divide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF7F50;\n"
"}"));

        gridLayout->addWidget(Divide, 2, 3, 1, 1);

        MemClear = new QPushButton(centralwidget);
        MemClear->setObjectName("MemClear");
        sizePolicy.setHeightForWidth(MemClear->sizePolicy().hasHeightForWidth());
        MemClear->setSizePolicy(sizePolicy);
        MemClear->setFont(font);
        MemClear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF7F50;\n"
"}"));

        gridLayout->addWidget(MemClear, 3, 4, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 5);

        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName("Button3");
        sizePolicy.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy);
        Button3->setFont(font);

        gridLayout->addWidget(Button3, 4, 2, 1, 1);

        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName("Button4");
        sizePolicy.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy);
        Button4->setFont(font);

        gridLayout->addWidget(Button4, 3, 0, 1, 1);

        Equals = new QPushButton(centralwidget);
        Equals->setObjectName("Equals");
        sizePolicy.setHeightForWidth(Equals->sizePolicy().hasHeightForWidth());
        Equals->setSizePolicy(sizePolicy);
        Equals->setFont(font);
        Equals->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF7F50;\n"
"}"));

        gridLayout->addWidget(Equals, 5, 4, 1, 1);

        Subtract = new QPushButton(centralwidget);
        Subtract->setObjectName("Subtract");
        sizePolicy.setHeightForWidth(Subtract->sizePolicy().hasHeightForWidth());
        Subtract->setSizePolicy(sizePolicy);
        Subtract->setFont(font);
        Subtract->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF7F50;\n"
"}"));

        gridLayout->addWidget(Subtract, 5, 3, 1, 1);

        Add = new QPushButton(centralwidget);
        Add->setObjectName("Add");
        sizePolicy.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy);
        Add->setFont(font);
        Add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF7F50;\n"
"}"));

        gridLayout->addWidget(Add, 4, 3, 1, 1);

        Display = new QLineEdit(centralwidget);
        Display->setObjectName("Display");
        sizePolicy.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(26);
        Display->setFont(font2);
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 1, 0, 1, 5);

        Calculator->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName("statusbar");
        Calculator->setStatusBar(statusbar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        Multiply->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        Button7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        MemAdd->setText(QCoreApplication::translate("Calculator", "M+", nullptr));
        Button6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        ChangeSign->setText(QCoreApplication::translate("Calculator", "+/-", nullptr));
        Button2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        MemGet->setText(QCoreApplication::translate("Calculator", "M", nullptr));
        Button5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        Button8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        Button0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        Button9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        Button1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        Clear->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
        Divide->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        MemClear->setText(QCoreApplication::translate("Calculator", "M-", nullptr));
        label->setText(QCoreApplication::translate("Calculator", "CALCULATOR", nullptr));
        Button3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        Button4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        Equals->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        Subtract->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        Add->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        Display->setText(QCoreApplication::translate("Calculator", "0.0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
