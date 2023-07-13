// score validation
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    float x, y;

    cin >> x;

    if (x < 0 || x > 10)
    {
        cout << "nota invalida" << endl;
    }

    y = x;
    x = -1;

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

    return 0;
}
