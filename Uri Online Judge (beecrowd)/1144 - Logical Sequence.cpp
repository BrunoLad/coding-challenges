// logical sequence
#include <iostream>

using namespace std;

int main()
{
    int n, s1 = 1;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << i << " " << (i * i) << " " << (i * i * i) << endl;
        s1 += (2 * i - 1);
        cout << i << " " << s1 << " " << (i * i * i) + 1 << endl;
    }

    return 0;
}
