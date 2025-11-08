// Tyeon Ford
#ifndef MOUSE_H
#define MOUSE_H

#include "Product.h"
using namespace std;

// Derived class from Product
class Mouse : public Product {
    private:
        int dpi;
        int numButtons;
        bool isWireless;
        string sensorType;

    public:
        Mouse(string name, double price, int stock, string desc, int dpiValue, bool wireless, int buttons, string sensor);

        // Override pure virtual function
        void displayDetails() const override;

        // Getters
        int getDPI() const;
        bool getIsWireless() const;
        int getNumButtons() const;
        string getSensorType() const;
};
#endif