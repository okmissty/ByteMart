// Tyeon Ford
#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include "Product.h"
#include <vector>
#include <map>
using namespace std;

// friendsss
class ReceiptPrinter;

class ShoppingCart {
    private:
        map<Product*, int> items;  // Product pointer -> quantity

    public:
        ShoppingCart();
        ~ShoppingCart() = default;

        // Cart operations
        bool addItem(Product* product, int quantity);
        bool removeItem(Product* product, int quantity);
        bool isEmpty() const;
        void clearCart();
        double getTotal() const;
        
        // Friend function declaration
        friend void printReceipt(const ShoppingCart& cart);

        // Getter for items (for checkout)
        const map<Product*, int>& getItems() const;
};

// Friend function - can access private members of ShoppingCart
void printReceipt(const ShoppingCart& cart);

#endif