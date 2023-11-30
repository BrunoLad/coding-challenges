#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, t;
    int cond = 0;

    cin >> s >> t;

    while (s != "*" && t != "*")
    {

        int mov = 0, i = 0;
        int aux[s.size()];

        for (int i = 0; i < s.size(); i++)
        {

            if (s[i] == t[i])
            {
                aux[i] = 0;
            }
            else
            {
                aux[i] = 1;
            }
        }

        for (int j = 0; j < s.size(); j++)
        {
            if (aux[j] == 1)
            {
                cond = 1;
            }
            else if (cond && aux[j] == 0)
            {
                cond = 0;
                mov++;
            }
        }
        if (cond)
        {
            cond = 0;
            mov++;
        }
        cout << mov << endl;
        cin >> s >> t;
    }

    // black and white

    return 0;
}
