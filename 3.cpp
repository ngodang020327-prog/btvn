#include <iostream>
using namespace std;

int main() {
    double amount = 95.0;             // T?ng ti?n mua
    double stateTaxRate = 0.04;       // 4%
    double countyTaxRate = 0.02;      // 2%

    double stateTax = amount * stateTaxRate;
    double countyTax = amount * countyTaxRate;
    double totalTax = stateTax + countyTax;

    cout << "Thue cua tieu bang: " << stateTax << endl;
    cout << "Thue cua quan: " << countyTax << endl;
    cout << "Tong thue: " << totalTax << endl;

    return 0;
}
