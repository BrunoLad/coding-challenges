// sequence IJ 2
#include <iostream>

using namespace std;

int main()
{
    int i = 1, j = 7;

    cout << "I=" << i << " J=" << j << endl;

    for (int k = 1; k < 15; k++)
    {
        if (k % 3 == 0)
        {
            i += 2;
            j = 7;
        }
        else
        {
            j--;
        }
        cout << "I=" << i << " J=" << j << endl;
    }

    return 0;
}
