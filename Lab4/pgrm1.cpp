#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

class Item {
public:
    string name;
    int quantity;
    double price; // Unit price
};

// Required function prototypes
void displayCart(const vector<Item>& cart);
double calculateTotal(const vector<Item>& cart);
void applyDiscount(vector<Item>& cart);
Item findMostExpensiveItem(const vector<Item>& cart);

int main() {
    // Store items using vector<Item>
    vector<Item> cart = {
        {"Laptop", 1, 65000.0},
        {"Wireless Mouse", 2, 850.0},
        {"Mechanical Keyboard", 1, 3500.0},
        {"USB Cable", 3, 300.0}
    };

    cout << "=== 1. INITIAL SHOPPING CART ===" << endl;
    displayCart(cart);

    // Calculate initial total
    auto initialTotal = calculateTotal(cart);
    cout << "\n=== 2. TOTAL AMOUNT PAYABLE ===" << endl;
    cout << "Total Amount Payable (Before Discount): ₹" << fixed << setprecision(2) << initialTotal << endl;

    // Find and display highest unit price item
    auto expensiveItem = findMostExpensiveItem(cart);
    cout << "\n=== 3. HIGHEST UNIT PRICE ITEM ===" << endl;
    cout << "Name: " << expensiveItem.name << " | Unit Price: ₹" << expensiveItem.price << endl;

    // Apply 10% discount on items > ₹1000
    applyDiscount(cart);

    cout << "\n=== 4. SHOPPING CART AFTER 10% DISCOUNT (Price > ₹1000) ===" << endl;
    displayCart(cart);

    // Calculate and display updated total[cite: 10]
    auto updatedTotal = calculateTotal(cart);
    cout << "\n=== 5. UPDATED CART TOTAL ===" << endl;
    cout << "Updated Cart Total (After Discount): ₹" << fixed << setprecision(2) << updatedTotal << endl;

    return 0;
}

// 1. Display all items in the cart in a tabular format[cite: 10]
void displayCart(const vector<Item>& cart) {
    cout << left << setw(25) << "Item Name" 
         << right << setw(10) << "Quantity" 
         << setw(15) << "Unit Price (₹)" 
         << setw(15) << "Total (₹)" << endl;
    cout << string(65, '-') << endl;

    // Using range-based for loop and auto, avoiding explicit iterators[cite: 10]
    for (const auto& item : cart) {
        cout << left << setw(25) << item.name 
             << right << setw(10) << item.quantity 
             << setw(15) << fixed << setprecision(2) << item.price 
             << setw(15) << item.quantity * item.price << endl;
    }
}

// 2. Calculate total amount payable[cite: 10]
double calculateTotal(const vector<Item>& cart) {
    double total = 0.0;
    for (const auto& item : cart) {
        total += item.quantity * item.price;
    }
    return total;
}

// 3. Find the item having the highest unit price[cite: 10]
Item findMostExpensiveItem(const vector<Item>& cart) {
    if (cart.empty()) {
        return {"", 0, 0.0};
    }
    
    auto maxItem = cart[0];
    for (const auto& item : cart) {
        if (item.price > maxItem.price) {
            maxItem = item;
        }
    }
    return maxItem;
}

// 4. Apply a 10% discount on all items whose price is greater than ₹1000[cite: 10]
void applyDiscount(vector<Item>& cart) {
    // Using auto& reference to modify the actual elements inside the vector
    for (auto& item : cart) {
        if (item.price > 1000.0) {
            item.price -= (item.price * 0.10); // 10% discount
        }
    }
}