#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    const double pi = 3.14159;
    int r;
    double a;

    cin >> r;

    a = (4.0 / 3) * pi * r * r * r;

    cout << fixed << setprecision(3) << "VOLUME = " << floor(a * 1000 + 0.5) / 1000 << endl;

    return 0;
}