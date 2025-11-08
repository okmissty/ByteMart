// Tyeon Ford
#include "USBHub.h"
#include <iostream>
#include <iomanip>

using namespace std;

// USB constructor
USBHub::USBHub(string name, double price, int stock, string desc, int ports, bool hasPD, int pdWatts, string version)
    : Product(name, price, stock, desc), numPorts(ports), hasPowerDelivery(hasPD), powerDeliveryWatts(pdWatts), usbVersion(version) {}

// methods
void USBHub::displayDetails() const {
    cout << "\n===== USB HUB DETAILS =====\n";
    cout << "Name: " << name << "\n";
    cout << "Price: $" << fixed << setprecision(2) << price << "\n";
    cout << "Stock: " << stock << " units\n";
    cout << "Description: " << description << "\n";
    cout << "Number of Ports: " << numPorts << "\n";
    cout << "USB Version: " << usbVersion << "\n";
    cout << "Power Delivery: " << (hasPowerDelivery ? "Yes" : "No");
    if (hasPowerDelivery) {
        cout << " (" << powerDeliveryWatts << "W)";
    }
    cout << "\n===========================\n";
}

int USBHub::getNumPorts() const {
    return numPorts;
}

bool USBHub::getHasPowerDelivery() const {
    return hasPowerDelivery;
}

int USBHub::getPowerDeliveryWatts() const {
    return powerDeliveryWatts;
}

string USBHub::getUSBVersion() const {
    return usbVersion;
}