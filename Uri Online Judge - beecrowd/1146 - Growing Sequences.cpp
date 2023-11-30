// growing sequences
#include <iostream>

using namespace std;

int main()
{
    int x;

    cin >> x;

    while (x)
    {
        for (int i = 1; i < x; i++)
        {
            cout << i << " ";
        }
        cout << x << endl;
        cin >> x;
    }

    return 0;
}
