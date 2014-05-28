#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_quitBtn_clicked()
{
    this->close();
}

void MainWindow::on_matchBtn_clicked()
{
    this->findChild<QTextEdit *>("mainText")->clear();
}
