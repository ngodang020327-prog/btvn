#include <iostream>
using namespace std;

int main() {
    double cost = 14.95;
    double profitRate = 0.35;

    double price = cost + (cost * profitRate);

    cout << "Gia ban bo mach: " << price << endl;

    return 0;
}
