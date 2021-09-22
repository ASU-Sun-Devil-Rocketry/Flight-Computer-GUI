#include "mainwidget.h"
#include "ui_mainwidget.h"
#include <QTimer>
#include <QDateTime>
#include <iostream>
#include <QDebug>

// time when start button was pressed
QTime startTime;
// true for start timer, false for stop timer
bool timerButtonState = true;

// Constructor
MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent), ui(new Ui::MainWidget)
{
    ui->setupUi(this);

    // set up timer
    QTimer *timer = new QTimer(this);
    // signal is the caller - when timout is called, it calls the slot - updateTimer
    // timout gets called every millisecond I think?
    connect(timer, SIGNAL(timeout()), this, SLOT(updateTimer()));
    timer->start();
}

MainWidget::~MainWidget()
{
    delete ui;
}

// When timer button is clicked
void MainWidget::on_startButton_clicked()
{
    // Flip button from start or stop
    // true for start timer, false for stop timer
    if (timerButtonState)
    {
        startTime = QTime::currentTime();
        ui->startButton->setText("Stop");
        timerButtonState = false;
    }
    else
    {
        ui->startButton->setText("Start");
        timerButtonState = true;
    }
}

void MainWidget::updateTimer()
{
    // if timer has been stopped (ready to start), don't update timer
    if (timerButtonState)
        return;

    // Get difference (msecsto) between start timer and current time
    int ms = startTime.msecsTo(QTime::currentTime());
    // create QTime object to convert ms to hh:mm:ss.zzz format, then add millisenconds
    QTime time(0, 0, 0, 0);
    time = time.addMSecs(ms);

    ui->timerLabel->setText(time.toString(("hh : mm : ss . zzz")));
    // Set font back to 16 (for some reason it downsizes when text is changed)
    QFont font = ui->timerLabel->font();
    font.setPointSize(16);
    ui->timerLabel->setFont(font);
}
