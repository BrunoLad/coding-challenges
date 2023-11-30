#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int x;
    float y;

    cin >> x;
    cin >> fixed >> setprecision(1) >> y;

    cout << fixed << setprecision(3) << floor(x / y * 1000 + 0.5) / 1000 << " km/l" << endl;

    return 0;
}