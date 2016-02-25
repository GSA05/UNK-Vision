#ifndef ITEM_H
#define ITEM_H

#include <QList>
#include <QVariant>
#include <QVector>

class Item
{
public:
    explicit Item(const QVector<QVariant> &data, Item *parent = 0);
    ~Item();

    Item *child(int number);
    int childCount() const;
    int columnCount() const;
    QVariant data(int column) const;
    bool insertChildren(int position, int count, int columns);
    bool insertColumns(int position, int columns);
    Item *parent();
    bool removeChildren(int position, int count);
    bool removeColumns(int position, int columns);
    int childNumber() const;
    bool setData(int column, const QVariant &value);

private:
    QList<Item*> childItems;
    QVector<QVariant> itemData;
    Item *parentItem;
};

#endif // ITEM_H
