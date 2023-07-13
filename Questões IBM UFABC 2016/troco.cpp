#include <iostream>

using namespace std;

int troco()
{
    int n, c1, c2, c5, c10, c20, c50, c100, t;

    c1 = c2 = c5 = c10 = c20 = c50 = c100 = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> c1 >> c2 >> c5 >> c10 >> c20 >> c50 >> c100 >> t;

        if (c100 && t >= 100 && t)
        {
            t = c100 <= ((t - t % 100) / 100) ? t - (100 * c100) : t - 100 * ((t - t % 100) / 100);
        }
        if (c50 && t >= 50 && t)
        {
            t = c50 <= ((t - t % 50) / 50) ? t - (50 * c50) : t - 50 * ((t - t % 50) / 50);
        }
        if (c20 && t >= 20 && t)
        {
            t = c20 <= ((t - t % 20) / 20) ? t - (20 * c20) : t - 20 * ((t - t % 20) / 20);
        }
        if (c10 && t >= 10 && t)
        {
            t = c10 <= ((t - t % 10) / 10) ? t - (10 * c10) : t - 10 * ((t - t % 10) / 10);
        }
        if (c5 && t >= 5 && t)
        {
            t = c5 <= ((t - t % 5) / 5) ? t - (5 * c5) : t - 5 * ((t - t % 5) / 5);
        }
        if (c2 && t >= 2 && t)
        {
            t = c2 <= ((t - t % 2) / 2) ? t - (2 * c2) : t - 2 * ((t - t % 2) / 2);
        }
        if (c1 && t >= 1 && t && c1 >= t)
        {
            t = 0;
        }

        if (t == 0)
        {
            cout << "SIM" << endl;
        }
        else
            cout << "NAO" << endl;

        t = 0;
    }

    return 0;
}
