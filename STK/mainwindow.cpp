#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qdockwidget.h"
#include <QtGui/QApplication>
#include <QtGui/QMainWindow>
#include <QtGui/QVBoxLayout>
#include <QtGui/QPushButton>
#include <QtCore/QFile>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{
    ui->setupUi(this);
//    this->setStyleSheet("background-color: 000005;");


}


MainWindow::~MainWindow()
{
    delete ui;

}


void MainWindow::on_actionExit_triggered()
{
    close();
}


