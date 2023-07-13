#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int a, b;
    float c;

    cin >> a;
    cin >> b;
    cin >> c;

    cout << "NUMBER = " << a << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << floor(b * c * 100 + 0.5) / 100 << endl;

    return 0;
}