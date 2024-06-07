#include "widget.h"
#include "ui_widget.h"
#include <stdlib.h>
#include <time.h>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    srand (time(NULL));
    secretNum = rand() % 100 +1;
    qDebug() << "Secret Number Generated: " << QString::number(secretNum);
    ui->StartOverButton->setDisabled(true);
    ui->MessageLabel->setText("");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_GuessButton_clicked()
{
    guessNum = ui->spinBox->value();
    qDebug() << "The Guessed number is: " << QString::number(guessNum);

    if(guessNum == secretNum){
        ui->MessageLabel->setText("Congratulations! You guessed the number. The number is: " +QString::number(secretNum));
        ui->GuessButton->setDisabled(true);
        ui->StartOverButton->setDisabled(false);
    }
    else{

        if(secretNum < guessNum){
            ui->MessageLabel->setText("Too High! Try guessing a lower number");
        }
        if(secretNum > guessNum){
            ui->MessageLabel->setText("Too Low! Try guessing a higher number");
        }
    }

}


void Widget::on_StartOverButton_clicked()
{
    ui->GuessButton->setDisabled(false);
    ui->StartOverButton->setDisabled(true);
    ui->spinBox->setValue(1);
    secretNum = rand() % 100 + 1;
    qDebug() << "New Secret Number Generated: " << QString::number(secretNum);
    ui->MessageLabel->setText("");


}

