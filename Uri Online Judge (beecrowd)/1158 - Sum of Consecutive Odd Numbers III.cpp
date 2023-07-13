// sum of consecutive odd numbers III
#include <iostream>

using namespace std;

int main()
{
    int n, x, y, s = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;

        if (x % 2 != 0)
        {
            y = x + (2 * y);
            for (int j = x; j < y; j += 2)
            {
                s += j;
            }
        }
        else
        {
            x++;
            y = (x) + (2 * y);
            for (int j = x; j < y; j += 2)
            {
                s += j;
            }
        }

        cout << s << endl;

        s = 0;
    }

    return 0;
}
