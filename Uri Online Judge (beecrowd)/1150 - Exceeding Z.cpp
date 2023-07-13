// exceeding Z
#include <iostream>

using namespace std;

int main()
{
    int n, z, s = 0, i = 0;

    cin >> n;
    cin >> z;

    if (z <= n)
    {
        while (z <= n)
        {
            cin >> z;
        }
    }

    while (s < z)
    {
        s += n;
        n++;
        i++;
    }

    cout << i << endl;

    return 0;
}
