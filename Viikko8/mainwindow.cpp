#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->start,&QPushButton::clicked,this,&MainWindow::startHandler);
    connect(ui->stop,&QPushButton::clicked,this,&MainWindow::stopHandler);

    connect(ui->sec,&QPushButton::clicked,this,&MainWindow::timer120Handler);
    connect(ui->min,&QPushButton::clicked,this,&MainWindow::timer5Handler);

    connect(ui->player1,&QPushButton::clicked,this,&MainWindow::player1Handler);
    connect(ui->player2,&QPushButton::clicked,this,&MainWindow::player2Handler);

    ui->progressBar1->setMinimum(0);

    ui->progressBar2->setMinimum(0);


    pQTimer = new QTimer(this);

    connect(pQTimer,&QTimer::timeout,this,&MainWindow::handlerTimer);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateProgressBar()
{

}

void MainWindow::setGameInfoText(QString T)
{
    ui->label->setText(T);
}

void MainWindow::startHandler()
{
    qDebug()<<"start nappi";
    setGameInfoText("Peli Alkaa, pelaajan 1 vuoro");
    pQTimer->start(1000);
    player1Time = gameTime;
    player2Time = gameTime;

    ui->progressBar1->setMaximum(gameTime);
    ui->progressBar2->setMaximum(gameTime);
    currentPlayer = 1;
    ui->progressBar1->setValue(gameTime);
    ui->progressBar2->setValue(gameTime);
}

void MainWindow::handlerTimer()
{
    if(currentPlayer == 1) {
        player1Time--;
        ui->progressBar1->setValue(player1Time);
        if (player1Time == 0) {
            qDebug()<<"Aika loppui";
            pQTimer->stop();
            setGameInfoText("Pelaaja 2 voitti");
        }
    }
    else {
        player2Time--;
        ui->progressBar2->setValue(player2Time);
        if (player2Time == 0) {
            qDebug()<<"Aika loppui";
            pQTimer->stop();
            setGameInfoText("Pelaaja 1 voitti");
        }
    }

}

void MainWindow::timer120Handler()
{
    gameTime= 120;
    setGameInfoText("Peliaika 2 min");
}

void MainWindow::timer5Handler()
{
    gameTime= 300;
    setGameInfoText("Peliaika 5 min");
}

void MainWindow::stopHandler()
{
    pQTimer->stop();
    setGameInfoText("Peli loppui");
}

void MainWindow::player1Handler()
{
    currentPlayer = 2;
    setGameInfoText("Pelaajan 2 vuoro");
}

void MainWindow::player2Handler()
{
    currentPlayer = 1;
    setGameInfoText("Pelaajan 1 vuoro");
}
