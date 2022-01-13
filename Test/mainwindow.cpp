#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    db = QSqlDatabase::addDatabase("QODBC");
//    db.setDatabaseName("DRIVER={Microsoft Access Driver (*.mdb, *.accdb)};FIL={MS Access};DBQ=C:/Users/ReWoodPC/Downloads/BDD.accdb");

    QSqlDatabase d = QSqlDatabase::addDatabase("QODBC");
    d.setDatabaseName("Driver={Microsoft Access Driver (*.mdb, *.accdb)};DBQ=C:/Users/ReWoodPC/Downloads/BDD.mdb;");
    bool ok = d.open();
    if(ok){qDebug("open :)");}
//    if(db.open()){qDebug("open :)");}
//    else qDebug("No open :(");
}

MainWindow::~MainWindow()
{
    delete ui;
}

