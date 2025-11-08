// Tyeon Ford
#ifndef MONITOR_H
#define MONITOR_H

#include "Product.h"
using namespace std;

// Derived class from Product
class Monitor : public Product {
    private:
        int screenSize;// in inches
        int refreshRate; // in Hz
        string resolution;
        string panelType;

    public:
        Monitor(string name, double price, int stock, string desc, int size, string res, int refresh, string panel);

        // Override the normal virtual function
        void displayDetails() const override;

        // Getters
        int getScreenSize() const;
        string getResolution() const;
        int getRefreshRate() const;
        string getPanelType() const;
};

#endif