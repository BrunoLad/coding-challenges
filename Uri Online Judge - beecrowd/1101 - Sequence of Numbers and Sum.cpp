// sequence of numbers and sum
#include <iostream>

using namespace std;

int main()
{
    int m, n, s = 0;

    cin >> m >> n;

    while (m > 0 && n > 0)
    {
        if (m >= n)
        {
            for (int i = n; i <= m; i++)
            {
                cout << i << " ";
                s += i;
            }
            cout << "Sum=" << s << endl;
        }
        else if (n > m)
        {
            for (int i = m; i <= n; i++)
            {
                cout << i << " ";
                s += i;
            }
            cout << "Sum=" << s << endl;
        }
        s = 0;
        cin >> m >> n;
    }

    return 0;
}
