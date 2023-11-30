#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    const double pi = 3.14159;
    double r, a;

    cin >> r;

    a = pi * r * r;

    cout << fixed << setprecision(4) << "A=" << floor(a * 10000 + 0.5) / 10000 << endl;

    return 0;
}