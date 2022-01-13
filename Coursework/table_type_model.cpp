#include "table_type_model.h"


table_Type_Model::table_Type_Model(QObject *parent)
    :QAbstractListModel(parent){}

int table_Type_Model::rowCount(const QModelIndex & /*parent*/) const
{
   return query_V.size();
}


QVariant table_Type_Model::data(const QModelIndex &index, int role) const
{
    if (role == Qt::DisplayRole)
    {
        return QString(query_V[index.row()].name +" "+ query_V[index.row()].type);
    }
    return QVariant();
}


void table_Type_Model::push_back(table_Type data)
{
    query_V.push_back(data);
    emit dataChanged(index(query_V.size()), index(query_V.size()));
}


void table_Type_Model::delete_col(size_t id)
{
    query_V.erase(query_V.begin() + id);
    emit dataChanged(index(id), index(query_V.size()));
}

void table_Type_Model::set_default()
{
    query_V.clear();

    query_V.push_back({"Name", "TEXT"});
    query_V.push_back({"Article", "INT"});
    query_V.push_back({"Type", "TEXT"});
    query_V.push_back({"Date", "DATE"});

    emit dataChanged(index(0), index(query_V.size()));
}



List_Model::List_Model(QObject *parent)
    :QAbstractListModel(parent){}

int List_Model::rowCount(const QModelIndex &/*parent*/) const {return String_V.size();}

QVariant List_Model::data(const QModelIndex &index, int role) const
{
    if (role == Qt::DisplayRole)
        {
            return QString(String_V[index.row()]);
        }
    return QVariant();
}

void List_Model::push_back(QString data)
{
    String_V.push_back(data);
    emit dataChanged(index(String_V.size()), index(String_V.size()));
}




