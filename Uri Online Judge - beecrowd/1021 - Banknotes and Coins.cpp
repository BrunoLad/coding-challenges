#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    float n, aux2, moedas;
    int aux, notas, n2;

    cin >> fixed >> setprecision(2) >> n;
    n2 = (int)n;
    n -= n2;
    n = floor(n * 100 + 0.5) / 100;
    aux = n2 % 100;
    cout << "NOTAS:" << endl;
    if (aux > 0 && n2 >= 100)
    {
        notas = (n2 - aux) / 100;
        n2 -= notas * 100;
        cout << notas << " nota(s) de R$ 100.00" << endl;
    }
    else
    {
        cout << 0 << " nota(s) de R$ 100.00" << endl;
    }

    aux = n2 % 50;

    if (aux > 0 && n2 >= 50)
    {
        notas = (n2 - aux) / 50;
        n2 -= notas * 50;
        cout << notas << " nota(s) de R$ 50.00" << endl;
    }
    else
    {
        cout << 0 << " nota(s) de R$ 50.00" << endl;
    }

    aux = n2 % 20;

    if (aux > 0 && n2 >= 20)
    {
        notas = (n2 - aux) / 20;
        n2 -= notas * 20;
        cout << notas << " nota(s) de R$ 20.00" << endl;
    }
    else
    {
        cout << 0 << " nota(s) de R$ 20.00" << endl;
    }

    aux = n2 % 10;

    if (aux > 0 && n2 >= 10)
    {
        notas = (n2 - aux) / 10;
        n2 -= notas * 10;
        cout << notas << " nota(s) de R$ 10.00" << endl;
    }
    else
    {
        cout << 0 << " nota(s) de R$ 10.00" << endl;
    }

    aux = n2 % 5;

    if (aux > 0 && n2 >= 5)
    {
        notas = (n2 - aux) / 5;
        n2 -= notas * 5;
        cout << notas << " nota(s) de R$ 5.00" << endl;
    }
    else
    {
        cout << 0 << " nota(s) de R$ 5.00" << endl;
    }

    aux = n2 % 2;

    if (n2 >= 2)
    {
        notas = (n2 - aux) / 2;
        n2 -= notas * 2;
        cout << notas << " nota(s) de R$ 2.00" << endl;
    }
    else
    {
        cout << 0 << " nota(s) de R$ 2.00" << endl;
    }

    aux = n2 % 1;
    cout << "MOEDAS:" << endl;
    if (n2 >= 1)
    {
        notas = (n2 - aux) / 1;
        n2 -= notas * 1;
        cout << notas << " moeda(s) de R$ 1.00" << endl;
    }
    else
    {
        cout << 0 << " moeda(s) de R$ 1.00" << endl;
    }

    aux2 = n - 0.5;

    if (aux2 >= 0)
    {
        // moedas=(n-aux2)/0.5;
        n -= 0.5;
        cout << 1 << " moeda(s) de R$ 0.50" << endl;
    }
    else
    {
        cout << 0 << " moeda(s) de R$ 0.50" << endl;
    }

    aux2 = n - 0.25;

    if (aux2 >= 0)
    {
        n -= 0.25;
        cout << 1 << " moeda(s) de R$ 0.25" << endl;
    }
    else
    {
        cout << 0 << " moeda(s) de R$ 0.25" << endl;
    }

    // cout << n << endl;
    n2 = n * 100;
    // cout << n2 << endl;
    aux = n2 % 10;

    if (aux >= 0 && n2 >= 10)
    {
        notas = (n2 - aux) / 10;
        n2 -= notas * 10;
        n -= 0.1 * notas;
        cout << notas << " moeda(s) de R$ 0.10" << endl;
    }
    else
    {
        cout << 0 << " moeda(s) de R$ 0.10" << endl;
    }

    aux2 = n - 0.05;
    // cout << n << endl;

    if (aux2 >= 0)
    {
        n -= 0.05;
        cout << 1 << " moeda(s) de R$ 0.05" << endl;
    }
    else
    {
        cout << 0 << " moeda(s) de R$ 0.05" << endl;
    }

    cout << n * 100 << " moeda(s) de R$ 0.01" << endl;

    return 0;
}