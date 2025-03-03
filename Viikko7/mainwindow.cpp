#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //handleClick();
    connect(ui->count,&QPushButton::clicked,this,&MainWindow::handleClick);

    connect(ui->reset,&QPushButton::clicked,this,&MainWindow::resetClick);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleClick()
{
    counter++;
    QString teksti = QString::number(counter);
    ui->tekstiLaatikko->setText(teksti);
}

void MainWindow::resetClick()
{
    counter = 0;
    QString teksti = QString::number(counter);
    ui->tekstiLaatikko->setText(teksti);
}
