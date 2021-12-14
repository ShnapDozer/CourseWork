#include "new_db.h"
#include "ui_new_db.h"

New_DB::New_DB(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::New_DB)
{
    ui->setupUi(this);

    Col_type = "INT"; // IZVRAT!!!!

    //ui->listView->
}

New_DB::~New_DB()
{
    delete ui;
}

void New_DB::on_lineEdit_textChanged(const QString &arg1){name = arg1;}

void New_DB::on_pushButton_3_clicked()
{
    query_DB +="CREATE TABLE " + name +"(";
    for(int i = 0; i < query_V.size(); ++i)
    {
        query_DB += query_V[i].name + " " + query_V[i].type;
        if(i != (query_V.size()-1)){query_DB += ", ";}
        else query_DB += ");";
    }

    emit signal_NewDB_Ok(name, query_DB);
}


void New_DB::on_lineEdit_2_textChanged(const QString &arg1){Col_name = arg1;}

void New_DB::on_comboBox_currentTextChanged(const QString &arg1){Col_type = arg1;}

void New_DB::on_pushButton_clicked(){ query_V.push_back({Col_name, Col_type});}



