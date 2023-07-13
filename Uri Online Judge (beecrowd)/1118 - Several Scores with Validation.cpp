// several scores with validation
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    double x, y;
    int c = 1;

    cin >> x;

    if (x < 0 || x > 10)
    {
        cout << "nota invalida" << endl;
    }

    y = x;
    x = -1;

    while (c != 2)
    {
        while ((x < 0 || x > 10) || (y < 0 || y > 10))
        {

            cin >> x;

            if ((x >= 0 && x <= 10) && (y < 0 || y > 10))
            {
                y = x;
                x = -1;
            }
            else if (x < 0 || x > 10)
            {
                cout << "nota invalida" << endl;
            }
        }

        printf("media = %.2f\n", ((x + y) / 2));
        cout << "novo calculo (1-sim 2-nao)" << endl;
        cin >> c;

        while (c != 1 && c != 2)
        {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> c;
        }

        y = -1;
        x = -1;
    }
    return 0;
}
