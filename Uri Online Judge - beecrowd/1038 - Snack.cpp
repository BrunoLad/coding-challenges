#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int x, y;

    cin >> x;
    cin >> y;

    if (x == 1)
    {
        cout << "Total: R$ " << fixed << setprecision(2) << floor(y * 4 * 100 + 0.5) / 100 << endl;
    }

    if (x == 2)
    {
        cout << "Total: R$ " << fixed << setprecision(2) << floor(y * 4.5 * 100 + 0.5) / 100 << endl;
    }

    if (x == 3)
    {
        cout << "Total: R$ " << fixed << setprecision(2) << floor(y * 5 * 100 + 0.5) / 100 << endl;
    }

    if (x == 4)
    {
        cout << "Total: R$ " << fixed << setprecision(2) << floor(y * 2 * 100 + 0.5) / 100 << endl;
    }

    if (x == 5)
    {
        cout << "Total: R$ " << fixed << setprecision(2) << floor(y * 1.5 * 100 + 0.5) / 100 << endl;
    }

    return 0;
}