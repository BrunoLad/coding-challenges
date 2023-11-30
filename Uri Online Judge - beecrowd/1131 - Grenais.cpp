// grenais
#include <iostream>

using namespace std;

int main()
{

    int i, g, c = 1, vi = 0, vg = 0, e = 0;

    while (c != 2)
    {
        cin >> i >> g;
        if (i > g)
        {
            vi++;
        }
        else if (g > i)
        {
            vg++;
        }
        else
        {
            e++;
        }

        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> c;
    }

    cout << (vi + vg + e) << " grenais" << endl;
    cout << "Inter:" << vi << endl;
    cout << "Gremio:" << vg << endl;
    cout << "Empates:" << e << endl;

    if (vi > vg)
    {
        cout << "Inter venceu mais" << endl;
    }
    else if (vg > vi)
    {
        cout << "Gremio venceu mais" << endl;
    }
    else
    {
        cout << "Nao houve vencedor" << endl;
    }

    return 0;
}
