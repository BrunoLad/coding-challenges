#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i, f, val;

    cin >> i >> f;

    if (i > 12 && f < 12)
    {
        val = 24 - i + f;
    }
    else if (i == f)
    {
        val = 24;
    }
    else
    {
        val = abs(i - f);
    }

    cout << "O JOGO DUROU " << val << " HORA(S)" << endl;

    return 0;
}
