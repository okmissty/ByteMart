// Tyeon Ford
// SSD class
#include "SSD.h"
#include <iostream>
#include <iomanip>

using namespace std;
// the constructor
SSD::SSD(string name, double price, int stock, string desc, int cap, int read, int write, string form)
    : Product(name, price, stock, desc), capacity(cap), readSpeed(read), writeSpeed(write), formFactor(form) {}

// methods
    void SSD::displayDetails() const {
    cout << "\n===== SSD DETAILS =====\n";
    cout << "Name: " << name << "\n";
    cout << "Price: $" << fixed << setprecision(2) << price << "\n";
    cout << "Stock: " << stock << " units\n";
    cout << "Description: " << description << "\n";
    cout << "Capacity: " << capacity << "GB\n";
    cout << "Read Speed: " << readSpeed << " MB/s\n";
    cout << "Write Speed: " << writeSpeed << " MB/s\n";
    cout << "Form Factor: " << formFactor << "\n";
    cout << "=======================\n";
}

int SSD::getCapacity() const {
    return capacity;
}

int SSD::getReadSpeed() const {
    return readSpeed;
}

int SSD::getWriteSpeed() const {
    return writeSpeed;
}

string SSD::getFormFactor() const {
    return formFactor;
}