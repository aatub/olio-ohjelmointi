#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProgressBar>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , player1Time(300)
    , player2Time(300)
    , currentPlayer(1)
    , selectedTime(0)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::updateTime);
    connect(ui->startBtn, &QPushButton::clicked, this, &MainWindow::startGame);
    connect(ui->switchBtn1, &QPushButton::clicked, this, &MainWindow::on_switchBtn1_clicked);
    connect(ui->switchBtn2, &QPushButton::clicked, this, &MainWindow::on_switchBtn2_clicked);
    connect(ui->timeOne, &QPushButton::clicked, this, &MainWindow::on_timeOne_clicked);
    connect(ui->timeTwo, &QPushButton::clicked, this, &MainWindow::on_timeTwo_clicked);
    ui->statusLabel->setText("Select playtime and press START GAME");
}

void MainWindow::updateStatusLabel(const QString &text){
    ui->statusLabel->setText(text);
}

void MainWindow::startGame(){
    if(selectedTime == 0){
        return;
    }
    player1Time = selectedTime;
    player2Time = selectedTime;
    timer->start(1000);
    updateProgressBars();
}

void MainWindow::on_timeOne_clicked(){
    selectedTime=120;
    ui->statusLabel->setText("Ready to play! 120 sec selected.");
}

void MainWindow::on_timeTwo_clicked(){
    selectedTime=300;
    ui->statusLabel->setText("Ready to play! 5 min selected.");
}

void MainWindow::on_startBtn_clicked(){
    startGame();
}

void MainWindow::on_switchBtn1_clicked(){
    if(currentPlayer== 1){
        switchPlayer();
    }
}

void MainWindow::on_switchBtn2_clicked(){
    if(currentPlayer == 2){
    switchPlayer();
    }
}

void MainWindow::on_stopBtn_clicked(){
    timer->stop();
    updateStatusLabel("Stopped.");
}

void MainWindow::switchPlayer(){
    currentPlayer = (currentPlayer==1) ? 2:1;
    updateStatusLabel(QString("Player %1 turn").arg(currentPlayer));
}

void MainWindow::updateTime(){
    if(currentPlayer==1){
        if(player1Time > 0){
            player1Time--;
            ui->progressBar1->setValue(player1Time);
        }
    }else{
        if(player2Time>0){
            player2Time--;
            ui->progressBar2->setValue(player2Time);
        }
    }
    if(player1Time==0){
        timer->stop();
        updateStatusLabel("Player 2 won!");
    } else if(player2Time==0){
        timer->stop();
        updateStatusLabel("Player 1 won!");
    }
}

void MainWindow::updateProgressBars(){
     ui->progressBar1->setMaximum(selectedTime);
    ui->progressBar2->setMaximum(selectedTime);
     ui->progressBar1->setValue(player1Time);
    ui->progressBar2->setValue(player2Time);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete timer;
}
