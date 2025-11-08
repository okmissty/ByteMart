## ByteMart Tech Hardware Store

### Tyeon Ford 
10/30/25 

## Program Description

ByteMart is a console-based tech hardware store that allows users to browse, purchase, and manage a shopping cart of various computer components and peripherals. The store features 13 different tech products across 6 categories: keyboards, monitors, mice, SSDs, GPUs, and USB hubs. Users can add items to their cart, remove items, view detailed product specifications, and checkout with an itemized receipt.

**How to run:**

- Compile: make all

- Run: ./bytemart

- Clean up: make clean


**Example Output**

```
======================================
   WELCOME TO BYTEMART TECH SHOP!   
======================================

====== MAIN MENU ======
1. Browse All Products
2. View Product Details
3. Add Item to Cart
4. Remove Item from Cart
5. Checkout
6. Exit
=======================
Enter your choice (1-6): 1

========== ALL PRODUCTS ==========

[1] Corsair K95 RGB - $199.99 (5 in stock)
[2] Keychron K2 - $89.99 (12 in stock)
[3] Anne Pro 2 - $79.99 [OUT OF STOCK]
[4] Dell S2721DGF - $349.99 (8 in stock)
[5] LG 27GN950-B - $799.99 (3 in stock)
[6] Logitech G Pro X - $149.99 (15 in stock)
[7] Razer DeathAdder V2 - $69.99 (20 in stock)
[8] Samsung 980 PRO - $129.99 (25 in stock)
[9] Crucial MX500 - $54.99 (30 in stock)
[10] NVIDIA RTX 4070 - $599.99 (6 in stock)
[11] AMD RX 7800 XT - $499.99 (7 in stock)
[12] Anker 7-in-1 USB-C Hub - $45.99 (18 in stock)
[13] CalDigit TS3 Plus - $279.99 (5 in stock)

==================================

====== MAIN MENU ======
1. Browse All Products
2. View Product Details
3. Add Item to Cart
4. Remove Item from Cart
5. Checkout
6. Exit
=======================
Enter your choice (1-6): 2

Enter product number (1-13): 1

===== KEYBOARD DETAILS =====
Name: Corsair K95 RGB
Price: $199.99
Stock: 5 units
Description: Premium mechanical gaming keyboard
Switch Type: Cherry MX Red
RGB Lighting: Yes
Layout: Full-Size (104-key)
============================

====== MAIN MENU ======
1. Browse All Products
2. View Product Details
3. Add Item to Cart
4. Remove Item from Cart
5. Checkout
6. Exit
=======================
Enter your choice (1-6): 3

========== ALL PRODUCTS ==========

[1] Corsair K95 RGB - $199.99 (5 in stock)
[2] Keychron K2 - $89.99 (12 in stock)
...

Enter product number to add (1-13): 1
Enter quantity: 2
2x Corsair K95 RGB added to cart.

====== MAIN MENU ======
1. Browse All Products
2. View Product Details
3. Add Item to Cart
4. Remove Item from Cart
5. Checkout
6. Exit
=======================
Enter your choice (1-6): 3

Enter product number to add (1-13): 10
Enter quantity: 1
1x NVIDIA RTX 4070 added to cart.

====== MAIN MENU ======
1. Browse All Products
2. View Product Details
3. Add Item to Cart
4. Remove Item from Cart
5. Checkout
6. Exit
=======================
Enter your choice (1-6): 4

===== YOUR CART =====
[1] Corsair K95 RGB (Qty: 2)
[2] NVIDIA RTX 4070 (Qty: 1)
=====================

Enter item number to remove (1-2): 1
Enter quantity to remove (1-2): 1
1x Corsair K95 RGB removed from cart.

====== MAIN MENU ======
1. Browse All Products
2. View Product Details
3. Add Item to Cart
4. Remove Item from Cart
5. Checkout
6. Exit
=======================
Enter your choice (1-6): 5

========================================
           BYTEMART RECEIPT            
========================================

Item                      Qty     Price       Total
----------------------------------------
Corsair K95 RGB             1    $199.99     $199.99
NVIDIA RTX 4070             1    $599.99     $599.99
----------------------------------------
                          GRAND TOTAL:     $799.98
========================================

Thank you for shopping at ByteMart!

Your order has been placed successfully!

====== MAIN MENU ======
1. Browse All Products
2. View Product Details
3. Add Item to Cart
4. Remove Item from Cart
5. Checkout
6. Exit
=======================
Enter your choice (1-6): 6

Thank you for visiting ByteMart!

Total keyboards sold today: 1
Total keyboard revenue: $199.99
```

## Product Catalog

### Keyboards

1. **Corsair K95 RGB** - $199.99
   - Premium mechanical gaming keyboard with Cherry MX Red switches
   - Full RGB lighting with customizable effects
   - Full-size 104-key layout
   - Stock: 5 units

2. **Keychron K2** - $89.99
   - Compact wireless mechanical keyboard for Mac and Windows
   - Gateron Brown switches for a balanced typing experience
   - 75% layout (84 keys) saves desk space
   - RGB backlit with multiple lighting modes
   - Stock: 12 units

3. **Anne Pro 2** - $79.99
   - Ultra-portable 60% mechanical keyboard
   - Kailh Box White switches for tactile feedback
   - RGB lighting with custom profiles
   - Compact 61-key layout
   - Stock: OUT OF STOCK

### Monitors

4. **Dell S2721DGF** - $349.99
   - 27-inch gaming monitor perfect for competitive gaming
   - 2560x1440 (QHD) resolution
   - 165Hz refresh rate for smooth gameplay
   - IPS panel for excellent color accuracy and viewing angles
   - Stock: 8 units

5. **LG 27GN950-B** - $799.99
   - Premium 4K gaming monitor with cutting-edge technology
   - 27-inch display with 3840x2160 resolution
   - 144Hz refresh rate for 4K gaming
   - Nano IPS panel technology for vivid colors
   - Stock: 3 units

### Mice

6. **Logitech G Pro X** - $149.99
   - Professional wireless gaming mouse trusted by esports pros
   - HERO 25K sensor with 25,600 DPI
   - 5 programmable buttons
   - Ultra-lightweight design for precision
   - Stock: 15 units

7. **Razer DeathAdder V2** - $69.99
   - Ergonomic wired gaming mouse with iconic shape
   - Focus+ Optical sensor with 20,000 DPI
   - 8 programmable buttons
   - Designed for palm grip comfort
   - Stock: 20 units

### SSDs

8. **Samsung 980 PRO** - $129.99
   - High-performance NVMe SSD for gaming and content creation
   - 1TB (1000GB) capacity
   - Read speed: 7000 MB/s, Write speed: 5000 MB/s
   - M.2 NVMe form factor (PCIe 4.0)
   - Stock: 25 units

9. **Crucial MX500** - $54.99
   - Reliable SATA SSD for everyday computing needs
   - 500GB capacity
   - Read speed: 560 MB/s, Write speed: 510 MB/s
   - 2.5-inch SATA form factor
   - Stock: 30 units

### GPUs

10. **NVIDIA RTX 4070** - $599.99
    - Powerful graphics card for 1440p gaming and content creation
    - 12GB GDDR6X VRAM
    - AD104 chipset with advanced ray tracing
    - Boost clock: 2475 MHz
    - Stock: 6 units

11. **AMD RX 7800 XT** - $499.99
    - Excellent performance for high-refresh rate gaming
    - 16GB GDDR6 VRAM
    - Navi 32 chipset with RDNA 3 architecture
    - Boost clock: 2430 MHz
    - Stock: 7 units

### USB Hubs

12. **Anker 7-in-1 USB-C Hub** - $45.99
    - Compact hub with multiple ports for laptops
    - 7 ports including USB-C, USB-A, HDMI, and SD card reader
    - 100W Power Delivery for charging
    - USB 3.0 for fast data transfer
    - Stock: 18 units

13. **CalDigit TS3 Plus** - $279.99
    - Professional Thunderbolt 3 dock for power users
    - 15 ports including dual DisplayPort, USB-A, USB-C, Ethernet
    - 87W Power Delivery
    - Thunderbolt 3 connectivity (40 Gbps)
    - Stock: 5 units


## Menu Navigation Tree

```
Main Menu
├── 1. Browse All Products
│   └── Displays list of all 13 products with prices and stock
│       └── Returns to Main Menu
│
├── 2. View Product Details
│   ├── Prompts for product number (1-13)
│   └── Displays detailed specifications for selected product
│       └── Returns to Main Menu
│
├── 3. Add Item to Cart
│   ├── Displays all products
│   ├── Prompts for product number (1-13)
│   ├── Prompts for quantity (1-stock available)
│   ├── Confirms item added or shows error if out of stock
│   └── Returns to Main Menu
│
├── 4. Remove Item from Cart
│   ├── Displays current cart contents
│   ├── If cart is empty, shows message and returns to Main Menu
│   ├── Prompts for item number to remove
│   ├── Prompts for quantity to remove
│   ├── Confirms item removed and restocks inventory
│   └── Returns to Main Menu
│
├── 5. Checkout
│   ├── If cart is empty, shows message and returns to Main Menu
│   ├── Displays itemized receipt with:
│   │   ├── Each item name
│   │   ├── Quantity
│   │   ├── Unit price
│   │   ├── Line total
│   │   └── Grand total
│   ├── Clears cart
│   ├── Confirms order placed
│   └── Returns to Main Menu
│
└── 6. Exit
    ├── Displays total keyboards sold (static tracking)
    ├── Displays total keyboard revenue
    └── Exits program
```

## Class Requirements
**Abstract Class**
- Product - Base class 

**Derived Classes**
- Keyboard - Inherits from Product
- Monitor - Inherits from Product
- Mouse - Inherits from Product
- SSD - Inherits from Product
- GPU - Inherits from Product
- USBHub - Inherits from Product

**Static Members**
- Keyboard class contains:

- Static variable: totalKeyboardsSold
- Static variable: totalKeyboardRevenue
- Static function: recordSale(int, double)
- Static function: getTotalKeyboardsSold()
- Static function: getTotalKeyboardRevenue()

**Friend Function**
ShoppingCart class has friend function printReceipt which accesses private member items to print the receipt

