#include <iostream>
using namespace std;

int main() {
    double height = 6;
    double length = 100;
    double areaOneCoat = height * length;
    double areaTwoCoats = areaOneCoat * 2;

    double coverage = 340; // 1 gallon phủ 340 feet vuông

    double gallonsNeeded = areaTwoCoats / coverage;

    cout << "So gallon son can dung: " << gallonsNeeded << endl;

    return 0;
}
