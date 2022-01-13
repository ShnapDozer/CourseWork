#include "new_db.h"
#include "ui_new_db.h"



New_DB::New_DB(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::New_DB)
{
    ui->setupUi(this);

    query = new table_Type_Model(0);
    ui->listView->setModel(query);

    Col_type = "INT"; // IZVRAT!!!!
    change_row = -1;

}

New_DB::~New_DB()
{
    delete ui;
}

void New_DB::on_lineEdit_textChanged(const QString &arg1){name = arg1;}

void New_DB::on_pushButton_3_clicked()
{
    query_DB +="CREATE TABLE " + name +"(";

    auto Vec = query->get_Query_V();
    for(int i = 0; i < Vec.size(); ++i)
    {
        query_DB += Vec[i].name + " " + Vec[i].type;
        if(i != (Vec.size()-1)){query_DB += ", ";}
        else query_DB += ");";
    }

    emit signal_NewDB_Ok(name, query_DB);
}

void New_DB::on_lineEdit_2_textChanged(const QString &arg1){Col_name = arg1;}

void New_DB::on_comboBox_currentTextChanged(const QString &arg1){Col_type = arg1;}

void New_DB::on_pushButton_clicked()
{
    query->push_back({Col_name, Col_type});
    ui->lineEdit_2->clear();
}

void New_DB::on_listView_clicked(const QModelIndex &index){change_row = index.row();}

void New_DB::on_pushButton_2_clicked()
{
    if(change_row != -1){query->delete_col(change_row);}
    change_row = -1;
}

void New_DB::on_pushButton_4_clicked()
{
    query->set_default();
    name = "ShopDB";

    ui->lineEdit->clear();
    ui->lineEdit->insert("ShopDB");
}

