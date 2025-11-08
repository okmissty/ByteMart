// Tyeon Ford
#include "Mouse.h"
#include <iostream>
#include <iomanip>

using namespace std;

Mouse::Mouse(string name, double price, int stock, string desc, int dpiValue, bool wireless, int buttons, string sensor)
    : Product(name, price, stock, desc), dpi(dpiValue), isWireless(wireless), numButtons(buttons), sensorType(sensor) {}

    
// methods
void Mouse::displayDetails() const {
    cout << "\n===== MOUSE DETAILS =====\n";
    cout << "Name: " << name << "\n";
    cout << "Price: $" << fixed << setprecision(2) << price << "\n";
    cout << "Stock: " << stock << " units\n";
    cout << "Description: " << description << "\n";
    cout << "DPI: " << dpi << "\n";
    cout << "Connection: " << (isWireless ? "Wireless" : "Wired") << "\n";
    cout << "Buttons: " << numButtons << "\n";
    cout << "Sensor: " << sensorType << "\n";
    cout << "=========================\n";
}

int Mouse::getDPI() const {
    return dpi;
}

bool Mouse::getIsWireless() const {
    return isWireless;
}

int Mouse::getNumButtons() const {
    return numButtons;
}

string Mouse::getSensorType() const {
    return sensorType;
}