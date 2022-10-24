#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QTimer>
#include <baker.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this); 

    bakeStore = new BakeStore();

    TimerController();
}

MainWindow::~MainWindow()
{
    delete timer;
    delete bakeStore;
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    bakeStore->buyPie();
    updateLabels();
}

void MainWindow::TimerController()
{
    timer = new QTimer();
    connect(timer, &QTimer::timeout, this, &MainWindow::updateLabels);
    timer->setInterval(500);
    timer->start();
}

void MainWindow::updateLabels()
{
    ui->label_2->setText(QString::number(bakeStore->getPieCounter()));
}

