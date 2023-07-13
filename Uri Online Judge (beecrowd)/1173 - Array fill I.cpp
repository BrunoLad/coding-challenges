// array fill I
#include <iostream>

using namespace std;

void fillarray(int x[10], int v);
void printararray(int x[10]);

int main()
{
    int n[10], x;

    fillarray(n, x);

    printararray(n);
}

void fillarray(int x[10], int v)
{

    cin >> v;

    for (int i = 0; i < 10; i++)
    {
        x[i] = v;
        v *= 2;
    }
}

void printararray(int x[10])
{
    for (int i = 0; i < 10; i++)
    {
        cout << "N[" << i << "] = " << x[i] << endl;
    }
}
