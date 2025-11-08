// Tyeon Ford
// Product aka parent class
#include "Product.h"
#include <iostream>

using namespace std;

Product::Product(string name, double price, int stock, string description)
    : name(name), price(price), stock(stock), description(description) {}

// methods
string Product::getName() const {
    return name;
}

double Product::getPrice() const {
    return price;
}

int Product::getStock() const {
    return stock;
}

string Product::getDescription() const {
    return description;
}

bool Product::reduceStock(int quantity) {
    if (stock >= quantity) {
        stock -= quantity;
        return true;
    }
    return false;
}

void Product::restoreStock(int quantity) {
    stock += quantity;
}

bool Product::isInStock() const {
    return stock > 0;
}