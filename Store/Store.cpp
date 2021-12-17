#include "Store.h"
#include <iostream>

Store::Store(std::vector<Item> items)
    : _items{ items } { }

void Store::printStore() {
    std::cout << "Store: \n";

    for (int i = 0; i < _items.size(); i++) {
        std::cout << _items[i].getName() << " x " << _items[i].getStock() << "\n";
    }
}
