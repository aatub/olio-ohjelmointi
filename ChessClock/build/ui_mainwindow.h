/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *timeOne;
    QPushButton *timeTwo;
    QPushButton *startBtn;
    QPushButton *stopBtn;
    QPushButton *switchBtn1;
    QPushButton *switchBtn2;
    QLabel *statusLabel;
    QProgressBar *progressBar1;
    QProgressBar *progressBar2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        timeOne = new QPushButton(centralwidget);
        timeOne->setObjectName("timeOne");
        timeOne->setGeometry(QRect(220, 290, 80, 24));
        timeTwo = new QPushButton(centralwidget);
        timeTwo->setObjectName("timeTwo");
        timeTwo->setGeometry(QRect(340, 290, 80, 24));
        startBtn = new QPushButton(centralwidget);
        startBtn->setObjectName("startBtn");
        startBtn->setGeometry(QRect(189, 380, 111, 51));
        stopBtn = new QPushButton(centralwidget);
        stopBtn->setObjectName("stopBtn");
        stopBtn->setGeometry(QRect(339, 380, 111, 51));
        switchBtn1 = new QPushButton(centralwidget);
        switchBtn1->setObjectName("switchBtn1");
        switchBtn1->setGeometry(QRect(140, 150, 101, 41));
        switchBtn2 = new QPushButton(centralwidget);
        switchBtn2->setObjectName("switchBtn2");
        switchBtn2->setGeometry(QRect(380, 150, 101, 41));
        statusLabel = new QLabel(centralwidget);
        statusLabel->setObjectName("statusLabel");
        statusLabel->setGeometry(QRect(0, 210, 641, 61));
        statusLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        progressBar1 = new QProgressBar(centralwidget);
        progressBar1->setObjectName("progressBar1");
        progressBar1->setGeometry(QRect(90, 82, 201, 51));
        progressBar1->setValue(100);
        progressBar2 = new QProgressBar(centralwidget);
        progressBar2->setObjectName("progressBar2");
        progressBar2->setGeometry(QRect(327, 82, 211, 51));
        progressBar2->setValue(100);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        timeOne->setText(QCoreApplication::translate("MainWindow", "120 SEC", nullptr));
        timeTwo->setText(QCoreApplication::translate("MainWindow", "5 MIN", nullptr));
        startBtn->setText(QCoreApplication::translate("MainWindow", "START GAME", nullptr));
        stopBtn->setText(QCoreApplication::translate("MainWindow", "STOP GAME", nullptr));
        switchBtn1->setText(QCoreApplication::translate("MainWindow", "Switch player", nullptr));
        switchBtn2->setText(QCoreApplication::translate("MainWindow", "Switch player", nullptr));
        statusLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
