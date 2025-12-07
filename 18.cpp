#include <iostream>
using namespace std;

int main() {
    int customers = 16500;

    double buyEnergy = customers * 0.15;
    double orange = buyEnergy * 0.58;

    cout << "So nguoi mua nuoc tang luc moi tuan: " << buyEnergy << endl;
    cout << "So nguoi thich vi cam: " << orange << endl;

    return 0;
}
