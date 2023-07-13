#include <iostream>

using namespace std;

bool ehprimo(int x);

int cadeiras()
{
    int n, x;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;

        if (!ehprimo(x))
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}

bool ehprimo(int x)
{
    int cont = 0;
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            cont++;
        }
    }
    if (cont > 2)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
