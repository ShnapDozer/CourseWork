#include "main_w.h"
#include "ui_main_w.h"

void upd_Colums(List_Model *colums, QSqlDatabase &BD, QString name)
{
    QSqlRecord record = BD.record(name);
    int n = record.count();
    for(int i = 0; i < n; i++)
    {
      colums->push_back(record.fieldName(i));
    }
}

QString Insert_Query(QString columns, QString values)
{
    return "INSERT INTO person (" + columns + ") VALUES (" + values + ")";
}

Main_W::Main_W(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Main_W)
{
    ui->setupUi(this);

    Selected_Filter = -1;

    start_W = new Start_w;
    open_W = new Open;
    newDB_W = new New_DB;

    connect(start_W, &Start_w::signal_Choose_W, this, &Main_W::slot_Choose_W);
    connect(open_W, &Open::signal_Ok, this, &Main_W::slot_OpenDB_Ok);
    connect(newDB_W, &New_DB::signal_NewDB_Ok, this, &Main_W::slot_NewDB_Ok);

    colums = new List_Model(0);
    ui->listView->setModel(colums);
    ui->listView->show();

    start_W->setModal(true);
    start_W->exec();  
}

Main_W::~Main_W()
{
    BD.close();
    delete ui;
}


void Main_W::on_tableView_clicked(const QModelIndex &index){Selected_Row = index.row();}

void Main_W::on_pushButton_2_clicked(){model->insertRow(model->rowCount());}

void Main_W::on_pushButton_clicked(){ model->removeRow(Selected_Row); }

void Main_W::slot_Choose_W(bool isNew)
{
    if(isNew)
    {
        newDB_W->setModal(true);
        newDB_W->exec();
    }
    else
    {
        open_W->setModal(true);
        open_W->exec();
    }

    start_W->close();
}

void Main_W::slot_OpenDB_Ok(QString File_Path, QString File_Type) // Remake!!! no work :(
{
    BD.close();
    BD.removeDatabase("generalBD");

    if(File_Type == ".db")
    {
        BD = QSqlDatabase::addDatabase("QSQLITE", "generalBD");
        BD.setDatabaseName(File_Path);
    }
    else if(File_Type == ".accdb" ||File_Type == ".mdb")
    {
        //File_Path.replace("\", "\\");
        BD = QSqlDatabase::addDatabase("QODBC");
        BD.setDatabaseName("DRIVER={Microsoft Access Driver (*.mdb, *.accdb)}; DBQ=C:\\Users\\ReWoodPC\\Downloads\\BDD.mdb");
    }

    if(BD.open()){qDebug("open :)");}
    else qDebug("No open :(");

    Table_Name = *BD.tables().begin();
    upd_Colums(colums, BD, Table_Name);

    query = new QSqlQuery(BD);

    model = new QSqlTableModel(this, BD);
    model->setTable(Table_Name);
    model->select();

    Q_model = new QSqlQueryModel();
    Q_model->setQuery("SELECT * FROM "+ Table_Name + ";", BD);

    ui->tableView->setModel(model);
}

void Main_W::slot_NewDB_Ok(QString Name, QString queryDB)
{
    newDB_W->close();

    BD.close();
    BD.removeDatabase("generalBD");

    BD = QSqlDatabase::addDatabase("QSQLITE", "");
    BD.setDatabaseName("./" + Name + ".db");

    if(BD.open()){qDebug("open :)");}
    else qDebug("No open :(");

    Table_Name = Name;

    upd_Colums(colums, BD, Name);

    query = new QSqlQuery(BD);
    query->exec(queryDB);

    model = new QSqlTableModel(this, BD);
    model->setTable(Table_Name);
    model->select();

    Q_model = new QSqlQueryModel();
    Q_model->setQuery("SELECT * FROM "+ Name + ";", BD);

    ui->tableView->setModel(model);
}


void Main_W::on_actionOpen_triggered()
{
    open_W->setModal(true);
    open_W->exec();
}

void Main_W::on_listView_clicked(const QModelIndex &index){Selected_Filter = index.row();}

void Main_W::on_lineEdit_textChanged(const QString &arg1){Filter_Word = arg1;}

void Main_W::on_pushButton_3_clicked()
{
    if(Selected_Filter != -1)
    {
        QString Quer = "SELECT * FROM "+ Table_Name + " WHERE " + colums->get_String(Selected_Filter) + "= '" + Filter_Word + "'";

        if (Filter_Word == "")Quer = "SELECT * FROM "+ Table_Name + ";";
        Q_model->setQuery(Quer, BD);
        ui->tableView->setModel(Q_model);
    }
    else
    {
        Q_model->disconnect();
        ui->tableView->setModel(model);
    }
}

