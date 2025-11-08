// Tyeon Ford
#ifndef GPU_H
#define GPU_H

#include "Product.h"
using namespace std;

// Derived class from Product
class GPU : public Product {
private:
    int vram; // in GB
    string chipset;
    int coreClock; // in MHz
    string brand;

public:
    GPU(string name, double price, int stock, string desc, int vramAmount, string chip, int clock, string mfg);

    // Override pure virtual function
    void displayDetails() const override;

    // Getters
    int getVRAM() const;
    string getChipset() const;
    int getCoreClock() const;
    string getBrand() const;
};

#endif