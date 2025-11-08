// Tyeon Ford
#ifndef USBHUB_H
#define USBHUB_H

#include "Product.h"
using namespace std;

// Derived class from Product
class USBHub : public Product {
private:
    int numPorts;
    bool hasPowerDelivery;
    int powerDeliveryWatts;
    string usbVersion;

public:
    USBHub(string name, double price, int stock, string desc, int ports, bool hasPD, int pdWatts, string version);

    // Override pure virtual function
    void displayDetails() const override;

    // Getters
    int getNumPorts() const;
    bool getHasPowerDelivery() const;
    int getPowerDeliveryWatts() const;
    string getUSBVersion() const;
};

#endif