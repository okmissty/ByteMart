// Tyeon Ford 
// 10/30/25
#include <iostream>
#include <vector>
#include <iomanip>
#include "Product.h"
#include "Keyboard.h"
#include "Monitor.h"
#include "Mouse.h"
#include "SSD.h"
#include "GPU.h"
#include "USBHub.h"
#include "ShoppingCart.h"

using namespace std;

int getValidInteger(int min, int max) {
    int value;
    cin >> value;
    cin.ignore(1000, '\n');
    return value;
}

void displayMainMenu() {
    cout << "\n====== MAIN MENU ======\n";
    cout << "1. Browse All Products\n";
    cout << "2. View Product Details\n";
    cout << "3. Add Item to Cart\n";
    cout << "4. Remove Item from Cart\n";
    cout << "5. Checkout\n";
    cout << "6. Exit\n";
    cout << "=======================\n";
    cout << "Enter your choice (1-6): ";
}

void displayAllProducts(const vector<Product*>& products) {
    cout << "\n========== ALL PRODUCTS ==========\n\n";
    
    for (size_t i = 0; i < products.size(); i++) {
        cout << "[" << i + 1 << "] " << products[i]->getName(); // Displays the product name
        cout << " - $" << fixed << setprecision(2) << products[i]->getPrice(); // and the price
        
        if (!products[i]->isInStock()) { // Out of stock
            cout << " [OUT OF STOCK]";
        } else {
            cout << " (" << products[i]->getStock() << " in stock)"; // The product is in stock
        }
        cout << "\n";
    }
    cout << "\n==================================\n";
}

void viewProductDetails(const vector<Product*>& products) {
    cout << "\nEnter product number (1-" << products.size() << "): ";
    int choice = getValidInteger(1, products.size());
    
    products[choice - 1]->displayDetails();
}

void addToCart(const vector<Product*>& products, ShoppingCart& cart) {
    displayAllProducts(products);
    
    cout << "\nEnter product number to add (1-" << products.size() << "): ";
    int productChoice = getValidInteger(1, products.size()); // chooses the product
    
    Product* selectedProduct = products[productChoice - 1]; // adds to cart
    
    if (!selectedProduct->isInStock()) { // Edgecase in the situation the product is out of stock
        cout << "\nOut of stock!\n";
        return;
    }
    
    cout << "Enter quantity: ";
    int quantity = getValidInteger(1, selectedProduct->getStock());

    cart.addItem(selectedProduct, quantity);
}

void removeFromCart(ShoppingCart& cart) {
    if (cart.isEmpty()) { // Cart is already empty
        cout << "\nYour cart is empty!\n";
        return;
    }

    cout << "\n===== YOUR CART =====\n";
    const auto& items = cart.getItems(); // Get cart items
    vector<Product*> cartProducts;
    
    int index = 1;
    for (const auto& pair : items) {
        cout << "[" << index << "] " << pair.first->getName() << " (Qty: " << pair.second << ")\n";
        cartProducts.push_back(pair.first);
        index++;
    }
    cout << "=====================\n";
    
    cout << "\nEnter item number to remove (1-" << cartProducts.size() << "): ";
    int choice = getValidInteger(1, cartProducts.size());
    
    Product* selectedProduct = cartProducts[choice - 1];
    int currentQty = items.at(selectedProduct);
    
    cout << "Enter quantity to remove (1-" << currentQty << "): ";
    int quantity = getValidInteger(1, currentQty);
    
    cart.removeItem(selectedProduct, quantity);
}

void checkout(ShoppingCart& cart) {
    if (cart.isEmpty()) { // In case cart is empty
        cout << "\nYour cart is empty! Add items before checking out.\n";
        return;
    }

    printReceipt(cart);  // Using a friend's function
    cart.clearCart();
    cout << "Your order has been placed successfully!\n";
}

int main() {
    // Initializing the products & variables
    vector<Product*> products;
    ShoppingCart cart;
    int choice;

    // Keyboards
    products.push_back(new Keyboard("Corsair K95 RGB", 199.99, 5, "Premium mechanical gaming keyboard", "Cherry MX Red", true, "Full-Size (104-key)"));
    products.push_back(new Keyboard("Keychron K2", 89.99, 12, "Compact wireless mechanical keyboard", "Gateron Brown", true, "75% (84-key)"));
    products.push_back(new Keyboard("Anne Pro 2", 79.99, 0, "Ultra-portable 60% mechanical keyboard", "Kailh Box White", true, "60% (61-key)"));

    // Monitors
    products.push_back(new Monitor("Dell S2721DGF", 349.99, 8, "27-inch gaming monitor with excellent response time", 27, "2560x1440", 165, "IPS"));
    products.push_back(new Monitor("LG 27GN950-B", 799.99, 3, "4K gaming monitor with Nano IPS technology", 27, "3840x2160", 144, "Nano IPS"));

    // Mice
    products.push_back(new Mouse("Logitech G Pro X", 149.99, 15, "Professional wireless gaming mouse", 25600, true, 5, "HERO 25K"));
    products.push_back(new Mouse("Razer DeathAdder V2", 69.99, 20, "Ergonomic wired gaming mouse", 20000, false, 8, "Focus+ Optical"));

    // SSDs
    products.push_back(new SSD("Samsung 980 PRO", 129.99, 25, "High-performance NVMe SSD for gaming and content creation", 1000, 7000, 5000, "M.2 NVMe"));
    products.push_back(new SSD("Crucial MX500", 54.99, 30, "Reliable SATA SSD for everyday computing", 500, 560, 510, "2.5-inch SATA"));

    // GPUs
    products.push_back(new GPU("NVIDIA RTX 4070", 599.99, 6, "Powerful graphics card for 1440p gaming", 12, "AD104", 2475, "NVIDIA"));
    products.push_back(new GPU("AMD RX 7800 XT", 499.99, 7, "Excellent performance for high-refresh gaming", 16, "Navi 32", 2430, "AMD"));

    // USB Hubs
    products.push_back(new USBHub("Anker 7-in-1 USB-C Hub", 45.99, 18, "Compact hub with multiple ports and power delivery", 7, true, 100, "USB 3.0"));
    products.push_back(new USBHub("CalDigit TS3 Plus", 279.99, 5, "Professional Thunderbolt 3 dock with 15 ports", 15, true, 87, "Thunderbolt 3"));


    cout << "\n======================================\n";
    cout << "   WELCOME TO BYTEMART TECH SHOP!   \n";
    cout << "======================================\n";

    while (true) {
        // opening
        displayMainMenu();
        choice = getValidInteger(1, 6);

        switch (choice) {
            // display all products
            case 1:
                displayAllProducts(products);
                break;
            // view a product's details
            case 2:
                viewProductDetails(products);
                break;
            // add to cart
            case 3:
                addToCart(products, cart);
                break;
            // remove from cart
            case 4:
                removeFromCart(cart);
                break;
            // checkout section
            case 5:
                checkout(cart);
                break;
            // exit shop
            case 6:
                cout << "\nThank you for visiting ByteMart!\n\n";
                
                // Clean up
                for (Product* p : products) {
                    delete p;
                }
                return 0;
        }
    }
    return 0;
}