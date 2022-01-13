#ifndef TABLE_TYPE_MODEL_H
#define TABLE_TYPE_MODEL_H

#include <QDialog>
#include <QAbstractListModel>
#include <QListView>

struct table_Type
{
    QString name, type;
};

class table_Type_Model : public QAbstractListModel
{
    Q_OBJECT;
    std::vector <table_Type> query_V;
public:
    table_Type_Model(QObject *parent);
    int rowCount(const QModelIndex &parent = QModelIndex()) const ;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;

    void push_back(table_Type data);
    void delete_col(size_t id);
    void set_default();

    std::vector <table_Type> get_Query_V(){return query_V;}
};

class List_Model : public QAbstractListModel
{
    Q_OBJECT;
    std::vector <QString> String_V;

public:
    List_Model(QObject *parent);
    int rowCount(const QModelIndex &parent = QModelIndex()) const ;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;

    void push_back(QString data);

    QString get_String(size_t index){return String_V[index];}
    std::vector <QString> get_Vec(){return String_V;}
};
#endif // TABLE_TYPE_MODEL_H
