#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    float m = 0, num;
    int n = 0;

    for (int i = 0; i < 6; i++)
    {
        cin >> num;
        if (num > 0)
        {
            m += num;
            n++;
        }
    }

    cout << n << " valores positivos" << endl;
    printf("%.1f\n", (m / n));

    return 0;
}