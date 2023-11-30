#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a;
    cin >> b;
    cin >> c;

    if ((a + b + abs(a - b)) / 2 > c)
    {
        cout << (a + b + abs(a - b)) / 2 << " eh o maior" << endl;
    }
    else
    {
        cout << c << " eh o maior" << endl;
    }

    return 0;
}