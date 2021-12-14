#ifndef NEW_DB_H
#define NEW_DB_H

#include <QDialog>

struct table_Type
{
    QString name, type;
};

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

signals:
    void signal_NewDB_Ok(QString Name, QString queryDB);

private:
    Ui::New_DB *ui;

    std::vector <table_Type> query_V;
    QString name, query_DB, Col_name, Col_type;
};

#endif // NEW_DB_H
