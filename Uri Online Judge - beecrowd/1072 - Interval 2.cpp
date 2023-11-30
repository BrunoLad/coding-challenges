// interval 2
#include <iostream>

using namespace std;

int main()
{
    int n, a, in = 0, o = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a < 21 && a > 9)
        {
            in++;
        }
        else
        {
            o++;
        }
    }

    cout << in << " in" << endl;
    cout << o << " out" << endl;

    return 0;
}
