#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c, delta;

    cin >> fixed >> setprecision(5) >> a;
    cin >> fixed >> setprecision(5) >> b;
    cin >> fixed >> setprecision(5) >> c;

    delta = (b * b) - (4 * a * c);

    if (delta < 0 || a == 0)
    {
        cout << "Impossivel calcular" << endl;
    }
    else
    {
        cout << fixed << setprecision(5) << "R1 = " << floor(((-b + sqrt(delta)) / (2 * a)) * 100000 + 0.5) / 100000 << endl;
        cout << fixed << setprecision(5) << "R2 = " << floor(((-b - sqrt(delta)) / (2 * a)) * 100000 + 0.5) / 100000 << endl;
    }

    return 0;
}