// Tyeon Ford
// Shopping Cart class
#include "ShoppingCart.h"
#include "Keyboard.h"
#include <iostream>
#include <iomanip>

using namespace std;

// Constructor
ShoppingCart::ShoppingCart() {}

// methods
bool ShoppingCart::addItem(Product* product, int quantity) {
    if (product == nullptr || quantity <= 0) {
        return false;
    }

    // Not enough stock for what the user is asking for
    if (!product->isInStock() || product->getStock() < quantity) {
        cout << "Not enough stock available!"<< endl;
        return false;
    }

    // Reduce stock
    if (product->reduceStock(quantity)) {
        items[product] += quantity;
        cout << quantity << "x " << product->getName() << " added to cart." << endl;
        return true;
    }
    
    return false;
}

bool ShoppingCart::removeItem(Product* product, int quantity) {
    if (product == nullptr || quantity <= 0) {
        return false;
    }

    auto it = items.find(product);
    if (it == items.end()) {
        cout << "Item not in cart!" << endl;
        return false;
    }

    if (it->second < quantity) { // Trying to remove more than what is whatever in the cart
        cout << "You only have " << it->second << " of this item in your cart." << endl;
        return false;
    }

    // Restore stock
    product->restoreStock(quantity);
    it->second -= quantity;

    if (it->second == 0) {
        items.erase(it);
    }

    cout << quantity << "x " << product->getName() << " removed from cart." << endl;
    return true;
}

void ShoppingCart::clearCart() {
    // Restore all stock before clearing
    for (auto& pair : items) {
        pair.first->restoreStock(pair.second);
    }
    items.clear();
}

bool ShoppingCart::isEmpty() const {
    return items.empty();
}

double ShoppingCart::getTotal() const {
    double total = 0.0;
    for (const auto& pair : items) {
        total += pair.first->getPrice() * pair.second;
    }
    return total;
}

const map<Product*, int>& ShoppingCart::getItems() const {
    return items;
}

// Friend function so it has access to private members of ShoppingCart 
void printReceipt(const ShoppingCart& cart) {
    cout << "\n";
    cout << "========================================\n";
    cout << "           BYTEMART RECEIPT            \n";
    cout << "========================================\n\n";

    if (cart.items.empty()) { // Cart is empty
        cout << "Your cart is empty!\n";
        cout << "========================================\n";
        return;
    }

    cout << left << setw(25) << "Item" << right << setw(5) << "Qty" << setw(10) << "Price" << setw(12) << "Total" << "\n";
    cout << "----------------------------------------\n";

    double grandTotal = 0.0;

    for (const auto& pair : cart.items) {
        Product* product = pair.first;
        int quantity = pair.second;
        double itemTotal = product->getPrice() * quantity;
        grandTotal += itemTotal;

        cout << left << setw(25) << product->getName() << right << setw(5) << quantity << setw(10) << fixed << setprecision(2) << "$" << product->getPrice() << setw(12) << "$" << itemTotal << "\n";
    }

    cout << "----------------------------------------\n";
    cout << right << setw(42) << "GRAND TOTAL: " << setw(10) << fixed << setprecision(2) << "$" << grandTotal << "\n";
    cout << "========================================\n";
    cout << "\nThank you for shopping at ByteMart!\n\n";
}