#include "friendlistmodel.h"

FriendListModel::FriendListModel(QVector<DataFriend*> *f) {
    friends = f;
}

int FriendListModel::rowCount(const QModelIndex &parent) const {

    return friends->size();
}

QVariant FriendListModel::data(const QModelIndex &index, int role) const {
    if (!index.isValid())
        return QVariant();
    if (index.row() >= friends->size())
        return QVariant();
    if (role == Qt::DisplayRole)
        return friends->at(index.row())->name;
    return QVariant();
}

QVariant FriendListModel::headerData(int section, Qt::Orientation orientation, int role) const {
    return QVariant();
}

void FriendListModel::updating(bool deletion, bool done, int index) {
    if (deletion && !done) {
        this->beginRemoveRows(QModelIndex(), index, index );
    } else if (deletion && done) {
        this->endRemoveRows();
    } else if (!deletion && !done) {
        this->beginInsertRows(QModelIndex(), index, index);
    } else if (!deletion && done) {
        this->endInsertRows();
    }
}
