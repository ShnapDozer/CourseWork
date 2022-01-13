#ifndef MAIN_W_H
#define MAIN_W_H

#include <QMainWindow>

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlTableModel>
#include <QtSql/QSqlRecord>
#include <QDate>

#include "open.h"
#include "new_db.h"
#include "start_w.h"

#include"table_type_model.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Main_W; }
QT_END_NAMESPACE

class Main_W : public QMainWindow
{
    Q_OBJECT

public:
    Main_W(QWidget *parent = nullptr);
    ~Main_W();

private slots:
    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_actionOpen_triggered();

    //slots:
    void slot_Choose_W(bool isNew);
    void slot_OpenDB_Ok(QString File_Path, QString File_Type);
    void slot_NewDB_Ok(QString Name, QString queryDB);

    void on_listView_clicked(const QModelIndex &index);

    void on_lineEdit_textChanged(const QString &arg1);

    void on_pushButton_3_clicked();

private:
    Ui::Main_W *ui;

    Start_w *start_W;
    Open *open_W;
    New_DB *newDB_W;

    QSqlDatabase BD;
    QSqlQuery *query;
    QSqlTableModel *model;
    QSqlQueryModel  *Q_model;

    List_Model *colums;

    QString Filter_Word, Table_Name;

    size_t Selected_Row;
    size_t Selected_Filter;
};
#endif // MAIN_W_H
