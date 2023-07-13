// sequence IJ 1
#include <iostream>

using namespace std;

int main()
{
    for (int i = 1, j = 60; j >= 0 && i <= 37; i += 3, j -= 5)
    {
        cout << "I=" << i << " J=" << j << endl;
    }

    return 0;
}
