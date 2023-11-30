#include <iostream>

using namespace std;

int main()
{
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

    int h1, m1, h2, m2, s;

    cin >> h1 >> m1 >> h2 >> m2;

    while (h1 != 0 || h2 != 0 || m1 != 0 || m2 != 0)
    {

        if (h1 > 23 || h1 < 0 || h2 > 23 || h2 < 0 || m1 < 0 || m1 > 59 || m2 < 0 || m2 > 59)
        {
        }
        else
        {
            h1 *= 60;
            h2 *= 60;
            if ((h2 + m2) < (h1 + m1))
            {
                if (h2 == 0)
                {

                    h2 = 24 * 60;
                    s = (h2 + m2) - (h1 + m1);

                    cout << s << endl;
                }
                else
                {

                    if ((h2 + m2) - (h1 + m1) < 0)
                    {
                        s = (24 * 60) + ((h2 + m2) - (h1 + m1));

                        cout << s << endl;
                    }
                }
            }
            else
            {

                s = (h2 + m2) - (h1 + m1);

                cout << s << endl;
            }
        }

        cin >> h1 >> m1 >> h2 >> m2;
    }

    return 0;
}
