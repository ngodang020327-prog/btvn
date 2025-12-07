#include <iostream>
using namespace std;

int main() {
    int shares = 750;
    double pricePerShare = 35.0;
    
    double stockCost = shares * pricePerShare;
    double commission = stockCost * 0.02;
    double total = stockCost + commission;

    cout << "Tien mua co phieu: " << stockCost << endl;
    cout << "Tien hoa hong: " << commission << endl;
    cout << "Tong thanh toan: " << total << endl;

    return 0;
}
