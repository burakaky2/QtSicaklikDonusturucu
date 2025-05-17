#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonC2F_clicked()
{
    bool ok;
    float celsius=ui->textEdit->toPlainText().toFloat(&ok);
    if (ok){
        float fahr=(celsius*9/5)+32;
        ui->Sonuc->setText("Sonuç :"+QString::number(fahr)+ "F ");
    }
    else{
        ui->Sonuc->setText("Lütfen geçerli bir sayı giriniz ");

    }



}


void MainWindow::on_pushButtonF2C_clicked()
{
    bool ok;
    float fahr=ui->textEdit->toPlainText().toFloat(&ok);
    if (ok){
        float celsius=(fahr-32)*5/9;
        ui->Sonuc->setText("Sonuç :"+QString::number(celsius)+ "C ");
    }
    else{
        ui->Sonuc->setText("Lütfen geçerli bir sayı giriniz ");

    }



}

