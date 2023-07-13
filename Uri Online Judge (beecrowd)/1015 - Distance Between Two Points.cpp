#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double x1, x2, y1, y2;

    cin >> fixed >> setprecision(1) >> x1;
    cin >> fixed >> setprecision(1) >> y1;
    cin >> fixed >> setprecision(1) >> x2;
    cin >> fixed >> setprecision(1) >> y2;

    cout << fixed << setprecision(4) << (sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) * 100000 + 0.5) / 100000 << endl;

    return 0;
}