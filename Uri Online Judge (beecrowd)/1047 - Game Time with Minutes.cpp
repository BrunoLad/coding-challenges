#include <iostream>

using namespace std;

int main()
{
    int i, f, mi, mf, val, minutos;

    cin >> i >> mi >> f >> mf;

    if (i > f)
    {
        if (mf < mi)
        {
            minutos = 60 - mi + mf;
            val = 24 - i + f - 1;
        }
        else
        {
            val = 24 - i + f;
            minutos = mi - mf;
        }
    }
    else if (i == f)
    {
        if (mi == mf)
        {
            val = 24;
            minutos = 0;
        }
        else if (mf < mi)
        {
            val = 23;
            minutos = 60 - mi + mf;
        }
        else
        {
            val = 0;
            minutos = mi - mf;
        }
    }
    else
    {
        if (mf < mi)
        {
            val = f - i - 1;
            minutos = 60 - mi + mf;
        }
        else
        {
            val = f - i;
            minutos = mf - mi;
        }
    }

    cout << "O JOGO DUROU " << val << " HORA(S) E " << minutos << " MINUTO(S)" << endl;

    return 0;
}
