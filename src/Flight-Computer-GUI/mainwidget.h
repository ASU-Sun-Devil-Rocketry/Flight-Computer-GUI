#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include "InputTest.cpp"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWidget; }
QT_END_NAMESPACE

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    MainWidget(QWidget *parent = nullptr);
    ~MainWidget();

private slots:
    void on_startButton_clicked();
    void updateTimer();

private:
    Ui::MainWidget *ui;
};
#endif // MAINWIDGET_H
