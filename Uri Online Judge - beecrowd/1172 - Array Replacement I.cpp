// array replacement I
#include <iostream>

using namespace std;

void fillarray(int x[10]);
void printarray(int x[10]);
void replacearray(int x[10]);

int main()
{

    int x[10];

    fillarray(x);

    replacearray(x);

    printarray(x);

    return 0;
}

void fillarray(int x[10])
{

    for (int i = 0; i < 10; i++)
    {
        cin >> x[i];
    }
}

void replacearray(int x[10])
{

    for (int i = 0; i < 10; i++)
    {
        if (x[i] <= 0)
        {
            x[i] = 1;
        }
    }
}

void printarray(int x[10])
{

    for (int i = 0; i < 10; i++)
    {
        cout << "X[" << i << "] = " << x[i] << endl;
    }
}
