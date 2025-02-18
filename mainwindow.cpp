#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , count(0)
{
    ui->setupUi(this);

    connect(ui->countButton,&QPushButton::clicked,this,&MainWindow::countBtn);
    connect(ui->resetButton,&QPushButton::clicked,this,&MainWindow::resetBtn);

    ui->lineEdit->setText(QString::number(count));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::countBtn(){
    count++;
    ui->lineEdit->setText(QString::number(count));
}


void MainWindow::resetBtn(){
    count = 0;
    ui->lineEdit->setText(QString::number(count));
}
