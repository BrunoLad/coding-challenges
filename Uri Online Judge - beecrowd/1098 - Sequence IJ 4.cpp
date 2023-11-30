// sequence IJ 4
#include <iostream>

using namespace std;

int main()
{
    float i = 0, j = 1;

    cout << "I=" << i << " J=" << j << endl;

    for (int k = 1; k < 33; k++)
    {
        if (k % 3 == 0)
        {
            i += 0.2;
            j -= 1.8;
        }
        else
        {
            j++;
        }
        cout << "I=" << i << " J=" << j << endl;
    }

    return 0;
}
