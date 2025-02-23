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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *num1;
    QPushButton *oneButton;
    QPushButton *resetButton;
    QLineEdit *num2;
    QLineEdit *result1;
    QPushButton *sixButton;
    QPushButton *fiveButton;
    QPushButton *fourButton;
    QPushButton *threeButton;
    QPushButton *twoButton;
    QPushButton *nineButton;
    QPushButton *eightButton;
    QPushButton *sevenButton;
    QPushButton *zeroButton;
    QPushButton *mul;
    QPushButton *sub;
    QPushButton *add;
    QPushButton *enterButton;
    QPushButton *div;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        num1 = new QLineEdit(centralwidget);
        num1->setObjectName("num1");
        num1->setGeometry(QRect(180, 180, 113, 24));
        oneButton = new QPushButton(centralwidget);
        oneButton->setObjectName("oneButton");
        oneButton->setGeometry(QRect(180, 230, 80, 24));
        resetButton = new QPushButton(centralwidget);
        resetButton->setObjectName("resetButton");
        resetButton->setGeometry(QRect(270, 320, 80, 24));
        num2 = new QLineEdit(centralwidget);
        num2->setObjectName("num2");
        num2->setGeometry(QRect(310, 180, 113, 24));
        result1 = new QLineEdit(centralwidget);
        result1->setObjectName("result1");
        result1->setGeometry(QRect(440, 180, 113, 24));
        sixButton = new QPushButton(centralwidget);
        sixButton->setObjectName("sixButton");
        sixButton->setGeometry(QRect(360, 260, 80, 24));
        fiveButton = new QPushButton(centralwidget);
        fiveButton->setObjectName("fiveButton");
        fiveButton->setGeometry(QRect(270, 260, 80, 24));
        fourButton = new QPushButton(centralwidget);
        fourButton->setObjectName("fourButton");
        fourButton->setGeometry(QRect(180, 260, 80, 24));
        threeButton = new QPushButton(centralwidget);
        threeButton->setObjectName("threeButton");
        threeButton->setGeometry(QRect(360, 230, 80, 24));
        twoButton = new QPushButton(centralwidget);
        twoButton->setObjectName("twoButton");
        twoButton->setGeometry(QRect(270, 230, 80, 24));
        nineButton = new QPushButton(centralwidget);
        nineButton->setObjectName("nineButton");
        nineButton->setGeometry(QRect(360, 290, 80, 24));
        eightButton = new QPushButton(centralwidget);
        eightButton->setObjectName("eightButton");
        eightButton->setGeometry(QRect(270, 290, 80, 24));
        sevenButton = new QPushButton(centralwidget);
        sevenButton->setObjectName("sevenButton");
        sevenButton->setGeometry(QRect(180, 290, 80, 24));
        zeroButton = new QPushButton(centralwidget);
        zeroButton->setObjectName("zeroButton");
        zeroButton->setGeometry(QRect(180, 320, 80, 24));
        mul = new QPushButton(centralwidget);
        mul->setObjectName("mul");
        mul->setGeometry(QRect(450, 290, 80, 24));
        sub = new QPushButton(centralwidget);
        sub->setObjectName("sub");
        sub->setGeometry(QRect(450, 260, 80, 24));
        add = new QPushButton(centralwidget);
        add->setObjectName("add");
        add->setGeometry(QRect(450, 230, 80, 24));
        enterButton = new QPushButton(centralwidget);
        enterButton->setObjectName("enterButton");
        enterButton->setGeometry(QRect(360, 320, 80, 24));
        div = new QPushButton(centralwidget);
        div->setObjectName("div");
        div->setGeometry(QRect(450, 320, 80, 24));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 150, 71, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(310, 150, 61, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(440, 150, 49, 16));
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
        oneButton->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        resetButton->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        sixButton->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        fiveButton->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        fourButton->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        threeButton->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        twoButton->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        nineButton->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        eightButton->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        sevenButton->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        zeroButton->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        enterButton->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
        div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Number 1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Number 2", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
