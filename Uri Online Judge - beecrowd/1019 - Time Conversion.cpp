#include <iostream>

using namespace std;

int main()
{
    int n, h = 0, m = 0, aux;

    cin >> n;

    aux = n % 3600;

    if (aux > 0 && n >= 3600)
    {
        h = n / 3600;
        n -= 3600 * h;
    }

    aux = n % 60;

    if (aux > 0 && n >= 60)
    {
        m = n / 60;
        n -= 60 * m;
    }

    cout << h << ":" << m << ":" << n << endl;

    return 0;
}