// Tyeon Ford
#include "Monitor.h"
#include <iostream>
#include <iomanip>

using namespace std;

// monitor's constructor
Monitor::Monitor(string name, double price, int stock, string desc, int size, string res, int refresh, string panel)
    : Product(name, price, stock, desc), screenSize(size), resolution(res), refreshRate(refresh), panelType(panel) {}

// methods
void Monitor::displayDetails() const {
    cout << "\n===== MONITOR DETAILS =====\n";
    cout << "Name: " << name << "\n";
    cout << "Price: $" << fixed << setprecision(2) << price << "\n";
    cout << "Stock: " << stock << " units\n";
    cout << "Description: " << description << "\n";
    cout << "Screen Size: " << screenSize << '"' << "\n";
    cout << "Resolution: " << resolution << "\n";
    cout << "Refresh Rate: " << refreshRate << "Hz\n";
    cout << "Panel Type: " << panelType << "\n";
    cout << "===========================\n";
}

int Monitor::getScreenSize() const {
    return screenSize;
}

string Monitor::getResolution() const {
    return resolution;
}

int Monitor::getRefreshRate() const {
    return refreshRate;
}

string Monitor::getPanelType() const {
    return panelType;
}