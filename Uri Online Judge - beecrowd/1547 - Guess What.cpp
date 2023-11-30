#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, qt, s, g, auxp, auxin = 99, a = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {

        cin >> qt >> s;

        for (int j = 1; j <= qt; j++)
        {

            cin >> g;

            if (g == s && !a)
            {
                auxp = j;
                auxin = 0;
                a = 1;
            }
            else if (abs(g - s) < auxin)
            {
                auxp = j;
                auxin = abs(g - s);
                // cout << auxin << endl;
            }
        }

        cout << auxp << endl;

        auxin = 99;
        a = 0;
    }

    return 0;
}