// dividing x by y
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int x, y, n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;

        if (y == 0)
        {
            cout << "divisao impossivel" << endl;
        }
        else
        {

            printf("%.1f\n", (float(x) / float(y)));
        }
    }

    return 0;
}
