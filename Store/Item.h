#pragma once
#include <string>

class Item {
public:
    Item(std::string name, long id, double price, int stock);

    std::string getName();
    long getId();
    double getPrice();
    int getStock();

    void setPrice(double price);
    void setStock(int stock);

private:
    std::string _name;
    long _id;
    double _price;
    int _stock;
};