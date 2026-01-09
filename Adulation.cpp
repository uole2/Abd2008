#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int consumption;
    int pricePerUnit;
    int totalBill;

    // Input electricity consumption
    cout << "Enter electricity consumption (in kWh): ";
    cin >> consumption;

    // Determine price per unit based on consumption
    if (consumption <= 100) {
        pricePerUnit = 250;
    } else if (consumption > 100 && consumption <= 300) {
        pricePerUnit = 300;
    } else {
        pricePerUnit = 350;
    }

    // Calculate total bill
    totalBill = consumption * pricePerUnit;

    // Evaluate consumption level
    if (totalBill > 100000) {
        cout << "High consumption – Please reduce usage" << endl;
    } else {
        cout << "Normal consumption" << endl;
    }

    // Display results
    cout << "Electricity Consumption: " << consumption << " kWh" << endl;
    cout << "Price Per Unit: " << pricePerUnit << " IQD" << endl;
    cout << "Total Bill: " << totalBill << " IQD" << endl;

    return 0;
}
