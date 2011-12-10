#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qdockwidget.h"

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

//set left hand docks to tabbed state
//void QMainWindow::tabifyDockWidget ( QDockWidget * first, QDockWidget * second )
//{

//}

void MainWindow::on_actionExit_triggered()
{
    close();
}


