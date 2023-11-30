#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int product1, product2, unit1, unit2;
    float value1, value2;

    cin >> product1;
    cin >> unit1;
    cin >> value1;
    cin >> product2;
    cin >> unit2;
    cin >> value2;

    cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << floor((unit1 * value1 + unit2 * value2) * 100 + 0.5) / 100 << endl;

    return 0;
}