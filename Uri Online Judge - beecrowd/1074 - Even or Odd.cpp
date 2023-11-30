// even or odd
#include <iostream>

using namespace std;

int main()
{
    int n, c;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> c;

        if (c > 0)
        {
            if (c % 2 == 0)
            {
                cout << "EVEN POSITIVE" << endl;
            }
            else
            {
                cout << "ODD POSITIVE" << endl;
            }
        }
        else if (c < 0)
        {
            if (c % 2 == 0)
            {
                cout << "EVEN NEGATIVE" << endl;
            }
            else
            {
                cout << "ODD NEGATIVE" << endl;
            }
        }
        else
        {
            cout << "NULL" << endl;
        }
    }

    return 0;
}
