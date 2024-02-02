#include <iostream>
#include <iomanip>
#include <unordered_map>

using namespace std;

// Function to calculate and print the receipt
void printReceipt(const unordered_map<string, double>& prices, const unordered_map<string, int>& quantities) {
    const string separator = "----------------------------------------";

    cout << "\n\t\tMy Street Shop\n";
    cout << "ProdCode\tQuantity\tPrice\tAmount (RM)\n";
    cout << separator << endl;

    double totalAmount = 0.0;

    for (const auto& item : quantities) {
        const string& prodCode = item.first;
        int quantity = item.second;

        double price = prices.at(prodCode);
        double amount = price * quantity;

        cout << setw(8) << prodCode << setw(15) << quantity << setw(10) << fixed << setprecision(2) << price << setw(15) << amount << endl;

        totalAmount += amount;
    }

    cout << separator << endl;
    cout << "Total purchase = RM " << fixed << setprecision(2) << totalAmount << endl;
}

int main() {
    // Product prices
    unordered_map<string, double> prices = {
        {"AAA", 5.00},
        {"BBB", 7.00},
        {"CCC", 2.30},
        {"DDD", 1.70},
        {"EEE", 9.00}
    };

    // Purchase quantities
    unordered_map<string, int> quantities = {
        {"BBB", 2},
        {"DDD", 4},
        {"EEE", 1}
    };

    // Print the receipt
    printReceipt(prices, quantities);

    return 0;
}
