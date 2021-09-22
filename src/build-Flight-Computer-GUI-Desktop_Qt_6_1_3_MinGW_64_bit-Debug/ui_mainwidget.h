/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QLabel *timerLabel;
    QPushButton *startButton;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName(QString::fromUtf8("MainWidget"));
        MainWidget->resize(800, 600);
        timerLabel = new QLabel(MainWidget);
        timerLabel->setObjectName(QString::fromUtf8("timerLabel"));
        timerLabel->setGeometry(QRect(280, 170, 241, 151));
        timerLabel->setTextFormat(Qt::AutoText);
        timerLabel->setAlignment(Qt::AlignCenter);
        startButton = new QPushButton(MainWidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(590, 250, 80, 21));

        retranslateUi(MainWidget);

        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QCoreApplication::translate("MainWidget", "MainWidget", nullptr));
        timerLabel->setText(QCoreApplication::translate("MainWidget", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">00 : 00 : 00 . 000</span></p></body></html>", nullptr));
        startButton->setText(QCoreApplication::translate("MainWidget", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
