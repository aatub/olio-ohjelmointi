#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void updateStatusLabel(const QString &text);
    ~MainWindow();

public slots:
    void startGame();
    void updateTime();
    void on_timeOne_clicked();
    void on_timeTwo_clicked();
    void on_startBtn_clicked();
    void on_switchBtn1_clicked();
    void on_switchBtn2_clicked();
    void on_stopBtn_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    int player1Time;
    int player2Time;
    int currentPlayer;
    int selectedTime;
    void switchPlayer();
    void updateProgressBars();

};
#endif // MAINWINDOW_H
