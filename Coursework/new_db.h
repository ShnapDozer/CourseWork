#ifndef NEW_DB_H
#define NEW_DB_H

#include <QDialog>
#include <QAbstractListModel>
#include <QListView>
#include <QDate>

#include"table_type_model.h"

namespace Ui {
class New_DB;
}

class New_DB : public QDialog
{
    Q_OBJECT

public:
    explicit New_DB(QWidget *parent = nullptr);
    ~New_DB();

private slots:
    void on_lineEdit_textChanged(const QString &arg1);

    void on_pushButton_3_clicked();

    void on_lineEdit_2_textChanged(const QString &arg1);

    void on_pushButton_clicked();

    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_listView_clicked(const QModelIndex &index);

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

signals:
    void signal_NewDB_Ok(QString Name, QString queryDB);

private:
    Ui::New_DB *ui;

    QListView *Type_LV;
    table_Type_Model *query;
    size_t change_row;

    size_t ff;

    QString name, query_DB, Col_name, Col_type;
};

#endif // NEW_DB_H
