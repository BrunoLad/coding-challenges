#include <iostream>

using namespace std;

int visibilidade()
{
    int n, x1, y1, x2, y2, a, b, c, x, y;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        // y - y1 = ((x2-x1)/(y2-y1))*(x - x1)
        // y =  -x
        // y = x
        a = (y1 - y2);
        b = (x2 - x1);
        c = x1 * y2 - x2 * y1;

        if (b == a || b == (-a))
        {
            cout << "SIM" << endl;
        }
        else
        {
            y = (40 * a + c) / (a - b);
            x = 40 - y;
            if ((x <= 40 && x >= 0) && (y <= 40 && y >= 0))
            {
                cout << "NAO" << endl;
            }
            else
            {
                y = (-c) / (a + b);
                x = y;
                if ((x <= 40 && x >= 0) && (y <= 40 && y >= 0))
                {
                    cout << "NAO" << endl;
                }
                else
                    cout << "SIM" << endl;
            }
        }
    }
    // acho que essa porra ta certo kk
    return 0;
}
