// perfect number
#include <iostream>

using namespace std;

int main()
{
    int n, s = 0, x;

    cin >> n;

    for (int i = 0; i < n; i++)
    {

        cin >> x;

        for (int j = 1; j < x; j++)
        {
            if (x % j == 0)
            {
                s += j;
            }
        }

        if (s == x)
        {
            cout << x << " eh perfeito" << endl;
        }
        else
        {
            cout << x << " nao eh perfeito" << endl;
        }

        s = 0;
    }

    return 0;
}
