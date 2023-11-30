#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    string name;
    double salary, value;

    cin >> name;
    cin >> salary;
    cin >> value;

    cout << fixed << setprecision(2) << "TOTAL = R$ " << floor((salary + value * 0.15) * 100 + 0.5) / 100 << endl;

    return 0;
}