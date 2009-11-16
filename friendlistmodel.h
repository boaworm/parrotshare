#ifndef FRIENDLISTMODEL_H
#define FRIENDLISTMODEL_H

#include <QAbstractListModel>
#include <QVector>

#include "datafriend.h"

class FriendListModel : public QAbstractListModel
{
public:
    FriendListModel(QVector<DataFriend*> *friends);

    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data(const QModelIndex &index, int role) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const;

    void updating(bool deletion, bool done, int index);

private:
    QVector<DataFriend*> *friends;

};

#endif // FRIENDLISTMODEL_H
