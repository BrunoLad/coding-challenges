#include <iostream>

using namespace std;

int main()
{
    int c = 0;
    float n;

    for (int i = 0; i < 6; i++)
    {
        cin >> n;
        if (n > 0)
        {
            c++;
        }
    }

    cout << c << " valores positivos" << endl;

    return 0;

    // positive numbers
}
