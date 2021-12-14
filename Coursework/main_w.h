#ifndef MAIN_W_H
#define MAIN_W_H

#include <QMainWindow>

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlTableModel>

#include "open.h"
#include "new_db.h"

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

    void slot_Ok(QString File_Path);

    void slot_NewDB_Ok(QString Name, QString queryDB);

    void on_actionOpen_triggered();

private:
    Ui::Main_W *ui;

    Open *open_W;
    New_DB *newDB_W;

    QSqlDatabase BD;
    QSqlQuery *query;
    QSqlTableModel *model;

    size_t SelectedRow;
};
#endif // MAIN_W_H
