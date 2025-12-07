#include <iostream>
using namespace std;

int main() {
    double sqft = 391876.0;
    double acre = 43560.0;

    double land = sqft / acre;

    cout << "So mau dat: " << land << endl;

    return 0;
}
