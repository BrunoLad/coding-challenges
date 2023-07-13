// highest position
#include <iostream>

using namespace std;

int main()
{
    int n, p, m = 0;

    for (int i = 1; i <= 100; i++)
    {
        cin >> n;
        if (n >= m)
        {
            m = n;
            p = i;
        }
    }
    cout << m << endl;
    cout << p << endl;

    return 0;
}
