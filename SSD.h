// TYeon Ford
#ifndef SSD_H
#define SSD_H

#include "Product.h"
using namespace std;    

// Derived class from Product
class SSD : public Product {
    private:
        int capacity; // in GB
        int readSpeed; // in MB/s
        int writeSpeed; // in MB/s
        string formFactor;

    public:
        SSD(string name, double price, int stock, string desc, int cap, int read, int write, string form);

        // Override pure virtual function
        void displayDetails() const override;

        // Getters
        int getCapacity() const;
        int getReadSpeed() const;
        int getWriteSpeed() const;
        string getFormFactor() const;
};

#endif