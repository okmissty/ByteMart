// Tyeon Ford
// GPU stuff
#include "GPU.h"
#include <iostream>
#include <iomanip>

using namespace std;

// GPU constructor
GPU::GPU(string name, double price, int stock, string desc, int vramAmount, string chip, int clock, string mfg)
    : Product(name, price, stock, desc), vram(vramAmount), chipset(chip), coreClock(clock), brand(mfg) {}

void GPU::displayDetails() const {
    cout << "\n===== GPU DETAILS =====\n";
    cout << "Name: " << name << "\n";
    cout << "Price: $" << fixed << setprecision(2) << price << "\n";
    cout << "Stock: " << stock << " units\n";
    cout << "Description: " << description << "\n";
    cout << "VRAM: " << vram << "GB\n";
    cout << "Chipset: " << chipset << "\n";
    cout << "Core Clock: " << coreClock << " MHz\n";
    cout << "Brand: " << brand << "\n";
    cout << "=======================\n";
}

int GPU::getVRAM() const {
    return vram;
}

string GPU::getChipset() const {
    return chipset;
}

int GPU::getCoreClock() const {
    return coreClock;
}

string GPU::getBrand() const {
    return brand;
}