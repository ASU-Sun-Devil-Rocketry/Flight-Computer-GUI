/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QLabel *timerLabel;
    QPushButton *startButton;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *pos_y;
    QLabel *pos_x;
    QLabel *pos_z;
    QGroupBox *groupBox_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *vel_x;
    QLabel *vel_y;
    QLabel *vel_z;
    QGroupBox *groupBox_3;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *rot_roll;
    QLabel *rot_pitch;
    QLabel *rot_yaw;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName(QString::fromUtf8("MainWidget"));
        MainWidget->resize(800, 600);
        timerLabel = new QLabel(MainWidget);
        timerLabel->setObjectName(QString::fromUtf8("timerLabel"));
        timerLabel->setGeometry(QRect(450, 20, 241, 51));
        timerLabel->setTextFormat(Qt::AutoText);
        timerLabel->setAlignment(Qt::AlignCenter);
        startButton = new QPushButton(MainWidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(700, 40, 80, 21));
        groupBox = new QGroupBox(MainWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 170, 231, 201));
        QFont font;
        font.setPointSize(16);
        groupBox->setFont(font);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 50, 31, 31));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:red;"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 100, 31, 31));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color:green;"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 150, 31, 31));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color:blue"));
        pos_y = new QLabel(groupBox);
        pos_y->setObjectName(QString::fromUtf8("pos_y"));
        pos_y->setGeometry(QRect(50, 100, 91, 31));
        pos_x = new QLabel(groupBox);
        pos_x->setObjectName(QString::fromUtf8("pos_x"));
        pos_x->setGeometry(QRect(50, 50, 91, 31));
        pos_z = new QLabel(groupBox);
        pos_z->setObjectName(QString::fromUtf8("pos_z"));
        pos_z->setGeometry(QRect(50, 150, 91, 31));
        groupBox_2 = new QGroupBox(MainWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(280, 170, 231, 201));
        groupBox_2->setFont(font);
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 50, 31, 31));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color:red;"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 100, 31, 31));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color:green;"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 150, 31, 31));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("color:blue"));
        vel_x = new QLabel(groupBox_2);
        vel_x->setObjectName(QString::fromUtf8("vel_x"));
        vel_x->setGeometry(QRect(50, 50, 91, 31));
        vel_y = new QLabel(groupBox_2);
        vel_y->setObjectName(QString::fromUtf8("vel_y"));
        vel_y->setGeometry(QRect(50, 100, 91, 31));
        vel_z = new QLabel(groupBox_2);
        vel_z->setObjectName(QString::fromUtf8("vel_z"));
        vel_z->setGeometry(QRect(50, 150, 91, 31));
        groupBox_3 = new QGroupBox(MainWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(540, 170, 231, 201));
        groupBox_3->setFont(font);
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 50, 51, 31));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("color:red;"));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 100, 61, 31));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("color:green;"));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 150, 51, 31));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("color:blue"));
        rot_roll = new QLabel(groupBox_3);
        rot_roll->setObjectName(QString::fromUtf8("rot_roll"));
        rot_roll->setGeometry(QRect(80, 50, 91, 31));
        rot_pitch = new QLabel(groupBox_3);
        rot_pitch->setObjectName(QString::fromUtf8("rot_pitch"));
        rot_pitch->setGeometry(QRect(80, 100, 91, 31));
        rot_yaw = new QLabel(groupBox_3);
        rot_yaw->setObjectName(QString::fromUtf8("rot_yaw"));
        rot_yaw->setGeometry(QRect(80, 150, 91, 31));

        retranslateUi(MainWidget);

        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QCoreApplication::translate("MainWidget", "MainWidget", nullptr));
        timerLabel->setText(QCoreApplication::translate("MainWidget", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">00 : 00 : 00 . 000</span></p></body></html>", nullptr));
        startButton->setText(QCoreApplication::translate("MainWidget", "Start", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWidget", "Postition", nullptr));
        label->setText(QCoreApplication::translate("MainWidget", "X:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWidget", "Y: ", nullptr));
        label_3->setText(QCoreApplication::translate("MainWidget", "Z: ", nullptr));
        pos_y->setText(QCoreApplication::translate("MainWidget", "00.00", nullptr));
        pos_x->setText(QCoreApplication::translate("MainWidget", "00.00", nullptr));
        pos_z->setText(QCoreApplication::translate("MainWidget", "00.00", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWidget", "Velocity", nullptr));
        label_4->setText(QCoreApplication::translate("MainWidget", "X:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWidget", "Y: ", nullptr));
        label_6->setText(QCoreApplication::translate("MainWidget", "Z: ", nullptr));
        vel_x->setText(QCoreApplication::translate("MainWidget", "00.00", nullptr));
        vel_y->setText(QCoreApplication::translate("MainWidget", "00.00", nullptr));
        vel_z->setText(QCoreApplication::translate("MainWidget", "00.00", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWidget", "Rotation", nullptr));
        label_7->setText(QCoreApplication::translate("MainWidget", "Roll: ", nullptr));
        label_8->setText(QCoreApplication::translate("MainWidget", "Pitch:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWidget", "Yaw:", nullptr));
        rot_roll->setText(QCoreApplication::translate("MainWidget", "00.00", nullptr));
        rot_pitch->setText(QCoreApplication::translate("MainWidget", "00.00", nullptr));
        rot_yaw->setText(QCoreApplication::translate("MainWidget", "00.00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
