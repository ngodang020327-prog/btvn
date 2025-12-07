#include <iostream>
using namespace std;

int main() {
    double mealCost = 88.67;
    double taxRate = 0.0675;
    double tipRate = 0.2;

    double tax = mealCost * taxRate;
    double tip = (mealCost + tax) * tipRate;
    double total = mealCost + tax + tip;

    cout << "Chi phi bua an: " << mealCost << endl;
    cout << "Tien thue: " << tax << endl;
    cout << "Tien tip: " << tip << endl;
    cout << "Tong hoa don: " << total << endl;

    return 0;
}
