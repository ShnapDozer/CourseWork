#include "main_w.h"
#include "ui_main_w.h"

Main_W::Main_W(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Main_W)
{
    ui->setupUi(this);

    open_W = new Open;
    newDB_W = new New_DB;

    connect(open_W, &Open::signal_Ok, this, &Main_W::slot_Ok);
    connect(newDB_W, &New_DB::signal_NewDB_Ok, this, &Main_W::slot_NewDB_Ok);

    newDB_W->setModal(true);
    newDB_W->exec();
}

Main_W::~Main_W()
{
    BD.close();
    delete ui;
}


void Main_W::on_tableView_clicked(const QModelIndex &index){SelectedRow = index.row();}

void Main_W::on_pushButton_2_clicked(){ model->insertRow(model->rowCount()); }

void Main_W::on_pushButton_clicked(){ model->removeRow(SelectedRow); }

void Main_W::slot_Ok(QString File_Path) // Remake!!! no work :(
{
    BD.close();

    delete query;
    delete model;

    BD.removeDatabase("generalBD");

    BD = QSqlDatabase::addDatabase("QODBC");
    BD.setDatabaseName("DRIVER={Microsoft Access Driver (*.mdb, *.accdb)};FIL={MS Access};DBQ=" + File_Path);

    if (!BD.open()){qDebug("No open :(");}
    else
    {
        qDebug("open :.)");

        query = new QSqlQuery(BD);

        model = new QSqlTableModel(this, BD);
        model->setTable("ProductsTable");
        model->select();

        ui->tableView->setModel(model);

//        BD = QSqlDatabase::addDatabase("QODBC");
//        qDebug() << BD.drivers();
//        BD.setHostName("localhost");
//        BD.setDatabaseName("MSDB");
//        qDebug() << BD.open();
    }
}

void Main_W::slot_NewDB_Ok(QString Name, QString queryDB)
{
    newDB_W->close();

    BD = QSqlDatabase::addDatabase("QSQLITE", "generalBD");
    BD.setDatabaseName("./" + Name + ".db");

    if(BD.open()){qDebug("open :)");}
    else qDebug("No open :(");

    query = new QSqlQuery(BD);
    query->exec(queryDB);
    //query->exec("CREATE TABLE ProductsTable(Name TEXT, Article TEXT, Type TEXT);");

    model = new QSqlTableModel(this, BD);
    model->setTable(Name);
    model->select();

    ui->tableView->setModel(model);
}


void Main_W::on_actionOpen_triggered()
{
    open_W->setModal(true);
    open_W->exec();
}

