#include <iostream>
using namespace std;

int main() {
    double tank = 20.0;
    double cityMPG = 23.5;
    double highwayMPG = 28.9;

    cout << "Quang duong di trong thanh pho: " << tank * cityMPG << " miles" << endl;
    cout << "Quang duong di tren cao toc: " << tank * highwayMPG << " miles" << endl;

    return 0;
}
