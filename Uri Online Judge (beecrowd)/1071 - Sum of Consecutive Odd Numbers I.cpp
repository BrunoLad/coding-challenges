// sum of consecutive odd numbers
#include <iostream>

using namespace std;

int main()
{
    int x, y, s = 0;

    cin >> x >> y;

    if (x > y)
    {
        if (y % 2 != 0)
        {
            for (int i = y + 2; i < x; i += 2)
            {
                s += i;
            }
        }
        else
        {
            y += 1;
            for (int i = y; i < x; i += 2)
            {
                s += i;
            }
        }
    }
    else if (y > x)
    {
        if (x % 2 != 0)
        {
            for (int i = x; i < y; i += 2)
            {
                s += i;
            }
        }
        else
        {
            y += 1;
            for (int i = x; i < y; i += 2)
            {
                s += i;
            }
        }
    }

    cout << s << endl;

    return 0;
}
