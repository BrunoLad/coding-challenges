#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    float a, b, c;

    cin >> a >> b >> c;

    if ((abs(b - c) < a && abs(b - c) < b + c) && (abs(a - c) < b && abs(a - c) < a + c) && (abs(a - b) < c && abs(a - b) < a + b))
    {
        cout << "Perimetro = " << fixed << setprecision(1) << floor((a + b + c) * 10 + 0.5) / 10 << endl;
    }
    else
    {
        cout << "Area = " << fixed << setprecision(1) << floor((((a + b) * c) / 2) * 10 + 0.5) / 10 << endl;
    }
    return 0;
}
