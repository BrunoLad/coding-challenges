// array selection
#include <iostream>
#include <stdio.h>

using namespace std;

void psarray(float v[100]);

void enchearray(float v[100]);

int main()
{

    float a[100];

    enchearray(a);

    psarray(a);

    return 0;
}

void psarray(float v[100])
{
    for (int i = 0; i < 100; i++)
    {
        if (v[i] <= 10.0)
        {
            // cout << "A[" << i << "] = " << v[i] << endl;
            printf("A[%i] = %.1f\n", i, v[i]);
        }
    }
}

void enchearray(float v[100])
{
    float x;

    for (int i = 0; i < 100; i++)
    {
        cin >> x;
        v[i] = x;
    }
}
