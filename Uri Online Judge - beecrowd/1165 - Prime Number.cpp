// prime number
#include <iostream>

using namespace std;

int main()
{
    int n, s, x;

    cin >> n;

    for (int i = 0; i < n; i++)
    {

        cin >> x;

        for (int j = 1; j <= x; j++)
        {
            if (x % j == 0)
            {
                s += j;
            }
        }

        if (s == (x + 1))
        {
            cout << x << " eh primo" << endl;
        }
        else
        {
            cout << x << " nao eh primo" << endl;
        }

        s = 0;
    }

    return 0;
}
