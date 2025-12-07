#include <iostream>
using namespace std;

int main() {
    double i1 = 15.59, i2 = 24.59, i3 = 6.59, i4 = 12.59, i5 = 3.59;
    double taxRate = 0.07;

    double subtotal = i1 + i2 + i3 + i4 + i5;
    double tax = subtotal * taxRate;
    double total = subtotal + tax;

    cout << "Gia cac mon hang:" << endl;
    cout << i1 << endl << i2 << endl << i3 << endl << i4 << endl << i5 << endl;

    cout << "Tong tam tinh: " << subtotal << endl;
    cout << "Tien thue: " << tax << endl;
    cout << "Tong phai tra: " << total << endl;

    return 0;
}
