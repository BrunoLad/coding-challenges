#include <iostream>

using namespace std;

int main()
{
    int n, aux, notas;

    cin >> n;

    aux = n % 100;
    cout << n << endl;
    if (aux > 0 && n >= 100)
    {
        notas = (n - aux) / 100;
        n -= notas * 100;
        cout << notas << " nota(s) de R$ 100,00" << endl;
    }
    else
    {
        cout << 0 << " nota(s) de R$ 100,00" << endl;
    }

    aux = n % 50;

    if (aux > 0 && n >= 50)
    {
        notas = (n - aux) / 50;
        n -= notas * 50;
        cout << notas << " nota(s) de R$ 50,00" << endl;
    }
    else
    {
        cout << 0 << " nota(s) de R$ 50,00" << endl;
    }

    aux = n % 20;

    if (aux > 0 && n >= 20)
    {
        notas = (n - aux) / 20;
        n -= notas * 20;
        cout << notas << " nota(s) de R$ 20,00" << endl;
    }
    else
    {
        cout << 0 << " nota(s) de R$ 20,00" << endl;
    }

    aux = n % 10;

    if (aux > 0 && n >= 10)
    {
        notas = (n - aux) / 10;
        n -= notas * 10;
        cout << notas << " nota(s) de R$ 10,00" << endl;
    }
    else
    {
        cout << 0 << " nota(s) de R$ 10,00" << endl;
    }

    aux = n % 5;

    if (aux > 0 && n >= 5)
    {
        notas = (n - aux) / 5;
        n -= notas * 5;
        cout << notas << " nota(s) de R$ 5,00" << endl;
    }
    else
    {
        cout << 0 << " nota(s) de R$ 5,00" << endl;
    }

    aux = n % 2;

    if (n >= 2)
    {
        notas = (n - aux) / 2;
        n -= notas * 2;
        cout << notas << " nota(s) de R$ 2,00" << endl;
    }
    else
    {
        cout << 0 << " nota(s) de R$ 2,00" << endl;
    }

    aux = n % 1;

    if (n >= 1)
    {
        notas = (n - aux) / 1;
        n -= notas * 1;
        cout << notas << " nota(s) de R$ 1,00" << endl;
    }
    else
    {
        cout << 0 << " nota(s) de R$ 1,00" << endl;
    }

    return 0;
}