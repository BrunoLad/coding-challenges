// easy fibonacci
#include <iostream>

using namespace std;

int main()
{

    int n, a = 0, p = 1, aux;

    cin >> n;

    if (n % 2 != 0)
    {
        n /= 2;

        for (int i = 0; i < n; i++)
        {
            cout << a << " ";
            cout << p << " ";
            a += p;
            p += a;
        }

        cout << a << endl;
    }
    else
    {

        n = n / 2 - 1;

        for (int i = 0; i < n; i++)
        {
            cout << a << " ";
            cout << p << " ";
            a += p;
            p += a;
        }
        cout << a << " ";
        cout << p << endl;
    }

    return 0;
}
