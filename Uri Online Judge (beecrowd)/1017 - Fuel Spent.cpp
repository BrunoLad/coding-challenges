#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int h, v;
    double consumption;

    cin >> h;
    cin >> v;

    consumption = (double)v * h / 12;

    cout << fixed << setprecision(3) << floor(consumption * 1000 + 0.5) / 1000 << endl;

    return 0;
}