// Tyeon Ford
#include "Keyboard.h"
#include <iostream>
#include <iomanip>

using namespace std;

// Initialize static members
int Keyboard::totalKeyboardsSold = 0;
double Keyboard::totalKeyboardRevenue = 0.0;

// keyboard constructor
Keyboard::Keyboard(string name, double price, int stock, string desc, string switchT, bool rgb, string lay)
    : Product(name, price, stock, desc), switchType(switchT), hasRGB(rgb), layout(lay) {}

void Keyboard::displayDetails() const {
    cout << "\n===== KEYBOARD DETAILS =====\n";
    cout << "Name: " << name << "\n";
    cout << "Price: $" << fixed << setprecision(2) << price << "\n";
    cout << "Stock: " << stock << " units\n";
    cout << "Description: " << description << "\n";
    cout << "Switch Type: " << switchType << "\n";
    cout << "RGB Lighting: " << (hasRGB ? "Yes" : "No") << "\n";
    cout << "Layout: " << layout << "\n";
    cout << "============================\n";
}

string Keyboard::getSwitchType() const {
    return switchType;
}

bool Keyboard::getHasRGB() const {
    return hasRGB;
}

string Keyboard::getLayout() const {
    return layout;
}

void Keyboard::recordSale(int quantity, double price) {
    totalKeyboardsSold += quantity;
    totalKeyboardRevenue += (quantity * price);
}

int Keyboard::getTotalKeyboardsSold() {
    return totalKeyboardsSold;
}

double Keyboard::getTotalKeyboardRevenue() {
    return totalKeyboardRevenue;
}