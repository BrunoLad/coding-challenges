// maester's map
#include <iostream>

using namespace std;

int main()
{
    int x, y, k = 0, c = 0, h = 0, kaux, caux;

    cin >> x;
    cin >> y;

    char m[y][x], r = ' ', refe = 'x';

    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cin >> m[i][j];
        }
    }

    if (m[c][k] == '.' || m[c][k] == '^' || m[c][k] == '<')
    {
        r = '!';
    }
    else
    {

        while (r == ' ')
        {

            if (h % 4 == 0)
            {
                if (caux == c && kaux == k)
                {
                    r = '!';
                }
            }

            if (m[c][k] == '*')
            {
                r = '*';
            }
            else if (m[c][k] == '>')
            {

                // k++;
                // aux++;
                // refe='>';

                if (k == (x - 1) || refe == '<')
                {
                    r = '!';
                    break;
                }
                else
                {

                    if (h == 0)
                    {
                        kaux = k;
                        caux = c;
                    }

                    k++;
                    // aux*=2;
                    h++;
                    refe = '>';
                }
            }
            else if (m[c][k] == '<')
            {

                if (k == 0 || refe == '>')
                {
                    r = '!';
                }
                else
                {
                    k--;

                    if (h == 0)
                    {
                        kaux = k;
                        caux = c;
                    }

                    // aux*=3;
                    h++;
                    refe = '<';
                }
            }
            else if (m[c][k] == 'v')
            {
                if (c == (y - 1) || refe == '^')
                {
                    r = '!';
                }
                else
                {
                    c++;
                    // aux*=5;

                    if (h == 0)
                    {
                        kaux = k;
                        caux = c;
                    }

                    h++;
                    refe = 'v';
                }
            }
            else if (m[c][k] == '^')
            {
                if (c == 0 || refe == 'v')
                {
                    r = '!';
                }
                else
                {
                    c--;

                    if (h == 0)
                    {
                        kaux = k;
                        caux = c;
                    }
                    // aux*=7;
                    h++;
                    refe = '^';
                }
            }
            else
            {
                if (c == 0 && refe == '^')
                {
                    r = '!';
                }
                else if (refe == '^')
                {
                    c--;
                }
                else if (c == (y - 1) && refe == 'v')
                {
                    r = '!';
                }
                else if (refe == 'v')
                {
                    c++;
                }
                else if (k == 0 && refe == '<')
                {
                    r = '!';
                }
                else if (refe == '<')
                {
                    k--;
                }
                else if (k == (x - 1) && refe == '>')
                {
                    r = '!';
                    // cout << "teste" << endl;
                }
                else if (refe == '>')
                {
                    k++;
                    // cout << "teste" << endl;
                }
            }
        }
    }

    cout << r << endl;

    return 0;
}
