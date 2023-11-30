// six odd numbers
#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    if (n % 2 != 0)
    {
        cout << n << endl;

        for (int i = n + 2; i <= n + 10; i += 2)
        {
            if (i % 2 != 0)
            {
                cout << i << endl;
            }
        }
    }
    else
    {
        for (int i = n + 1; i <= n + 12; i += 2)
        {
            cout << i << endl;
        }
    }

    return 0;
}
