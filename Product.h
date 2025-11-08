// Tyeon Ford
#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
using namespace std;

// Abstract base class for all products
class Product {
    protected:
        string name;
        string description;
        double price;
        int stock;
        

    public:
        Product(string name, double price, int stock, string description);
        virtual ~Product() = default;

        // Pure virtual function - makes this an abstract class
        virtual void displayDetails() const = 0;

        // getters
        string getName() const;
        double getPrice() const;
        int getStock() const;
        string getDescription() const;

        // Stock management area
        bool reduceStock(int quantity);
        void restoreStock(int quantity);
        bool isInStock() const;
};

#endif