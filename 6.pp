#include <iostream>
using namespace std;

int main() {
    double pay = 2200.0;    // lương mỗi kỳ
    int periods = 26;       // số kỳ lương

    double annualPay = pay * periods;

    cout << "Tong luong hang nam: " << annualPay << " USD" << endl;

    return 0;
}
