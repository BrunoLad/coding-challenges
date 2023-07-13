// even, odd, positive and negative
#include <iostream>

using namespace std;

int main()
{
    int e, n = 0, pos = 0, p = 0, im = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> e;

        if (e > 0)
        {
            pos++;
        }
        else if (e < 0)
        {
            n++;
        }

        if (e % 2 == 0)
        {
            p++;
        }
        else
        {
            im++;
        }
    }

    cout << p << " valor(es) par(es)" << endl;
    cout << im << " valor(es) impar(es)" << endl;
    cout << pos << " valor(es) positivo(s)" << endl;
    cout << n << " valor(es) negativo(s)" << endl;

    return 0;
}
