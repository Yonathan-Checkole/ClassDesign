#include "Item.h"
#include <vector>

class Store {
public:
    Store(std::vector<Item> items);

    void printStore();

private:
    std::vector<Item> _items;
};
