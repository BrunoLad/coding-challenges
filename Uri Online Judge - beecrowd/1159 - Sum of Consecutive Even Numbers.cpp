// sum of consecutive even numbers
#include <iostream>

using namespace std;

int main()
{
    int n, r, s = 0;

    cin >> n;

    while (n)
    {

        if (n % 2 == 0)
        {
            r = n + 10;
            for (int i = n; i < r; i += 2)
            {
                s += i;
            }
        }
        else
        {
            n++;
            r = n + 10;
            for (int i = n; i < r; i += 2)
            {
                s += i;
            }
        }

        cout << s << endl;

        s = 0;
        cin >> n;
    }

    return 0;
}
