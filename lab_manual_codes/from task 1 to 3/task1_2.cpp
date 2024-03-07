#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int NUM_ITEMS = 3;
    double prices[NUM_ITEMS];
    int quantities[NUM_ITEMS];
    double subtotal = 0.0;

    // Prompt for prices and quantities of items
    for (int i = 0; i < NUM_ITEMS; ++i) {
        cout << "Enter the price of item " << i + 1 << ": ";
        cin >> prices[i];
        cout << "Enter the quantity of item " << i + 1 << ": ";
        cin >> quantities[i];
        subtotal += prices[i] * quantities[i];
    }

    // Calculate tax amount (using tax rate of 5.5%)
    double taxRate = 0.055;
    double tax = subtotal * taxRate;

    // Calculate total
    double total = subtotal + tax;

    // Print line items
    cout << "\nLine Items:" << endl;
    for (int i = 0; i < NUM_ITEMS; ++i) {
        double totalItem = prices[i] * quantities[i];
        cout << "Item " << i + 1 << ": Quantity " << quantities[i] << ", Total $" << fixed << setprecision(2) << totalItem << endl;
    }

    // Print subtotal, tax, and total
    cout << "\nSubtotal: $" << fixed << setprecision(2) << subtotal << endl;
    cout << "Tax: $" << fixed << setprecision(2) << tax << endl;
    cout << "Total: $" << fixed << setprecision(2) << total << endl;

    return 0;
}
