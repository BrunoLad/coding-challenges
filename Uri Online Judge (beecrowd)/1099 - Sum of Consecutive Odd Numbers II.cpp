// sum of consecutive odd numbers 2
#include <iostream>

using namespace std;

int main()
{
    int n, x, y, s = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (x > y)
        {

            if (y % 2 == 0)
            {
                y++;
            }
            else
            {
                y += 2;
            }

            for (int j = y; j < x; j += 2)
            {
                s += j;
            }

            cout << s << endl;
        }
        else if (y > x)
        {

            if (x % 2 == 0)
            {
                x++;
            }
            else
            {
                x += 2;
            }

            for (int j = x; j < y; j += 2)
            {
                s += j;
            }

            cout << s << endl;
        }
        else
        {

            cout << 0 << endl;
        }
        s = 0;
    }

    return 0;
}
