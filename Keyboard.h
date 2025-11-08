// Tyeon Ford
// keyboard class
#ifndef KEYBOARD_H
#define KEYBOARD_H

#include "Product.h"

using namespace std;

// Derived class from Product with static members
class Keyboard : public Product {
    private:
        string switchType;
        bool hasRGB;
        string layout;

        // Static members to track total keyboards sold
        static int totalKeyboardsSold;
        static double totalKeyboardRevenue;

    public:
        Keyboard(string name, double price, int stock, string desc, string switchT, bool rgb, string lay);

        // Override pure virtual function
        void displayDetails() const override;

        // Getters for keyboard-specific attributes
        string getSwitchType() const;
        bool getHasRGB() const;
        string getLayout() const;

        // Static functions
        static void recordSale(int quantity, double price);
        static int getTotalKeyboardsSold();
        static double getTotalKeyboardRevenue();
};

#endif