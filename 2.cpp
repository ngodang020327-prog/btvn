#include <iostream>
using namespace std;

int main() {
    double totalSales = 8.6e6;       // 8.6 triệu đô
    double percent = 0.58;           // 58%
    double eastSales = totalSales * percent;

    cout << "Du doan doanh thu East Coast: " << eastSales << " USD" << endl;

    return 0;
}
