#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdio.h>

using namespace std;

int main()
{
    double s, ns;

    cin >> s;

    if (s <= 400.00)
    {
        ns = s + (s * 0.15);
    }
    else if (s <= 800.00)
    {
        ns = s * 1.12;
    }
    else if (s <= 1200.00)
    {
        ns = s + (s * 0.1);
    }
    else if (s <= 2000.00)
    {
        ns = s + (s * 0.07);
    }
    else
    {
        ns = s + (s * 0.04);
    }

    /*cout << "Novo salario: " << floor(ns/0.01+0.5)*0.01 << endl;
    cout << "Reajuste ganho: " << floor((ns-s)/0.01+0.5)*0.01 << endl;
    cout << "Em percentual: " << 100*((ns/s) - 1) << " %" << endl;*/

    printf("Novo salario: %.2f\n", ns);
    printf("Reajuste ganho: %.2f\n", (ns - s));
    printf("Em percentual: %.0f %%\n", ((ns / s - 1) * 100));

    // cout << setprecision(3) << s;

    return 0;
}
