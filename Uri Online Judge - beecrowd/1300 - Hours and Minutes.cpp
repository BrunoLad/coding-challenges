#include <iostream>
#include <iomanip>

using namespace std;

void otherSolution();
void thirdSolution();
void angulos(int v[]);
void zeravetor(int v[181]);

int main()
{
    int a, aux, min = 0, h = 0;
    bool cond = false;

    while (cin >> a)
    {

        for (int i = 1; i <= 720; i++)
        {
            if (i % 12 == 0 && h <= 12)
            {
                h++;
            }
            else if (h == 12)
            {
                h = 0;
            }

            if (min <= 60)
            {
                min++;
            }
            else
            {
                min = 0;
            }

            aux = abs((h * 30) - (6 * min));
            // cout << aux << endl;
            // cout << h << endl;
            // cout << min << endl;

            if (aux == a && !cond)
            {
                cond = true;
            }

            // cout << cond << endl;
        }
        // cout << cond << endl;
        if (cond)
        {
            cout << "Y" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
        cond = false;
    }

    return 0;
}

// AND

void otherSolution()
{
    int a;

    while (cin >> a)
    {
        // cout << cond << endl;
        if (a % 6 == 0)
        {
            cout << "Y" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
    }
}

void thirdSolution()
{

    int v[181];
    zeravetor(v);
    angulos(v);

    int a;

    while (cin >> a)
    {
        // cout << cond << endl;
        if (v[a] == 1)
        {
            cout << "Y" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
    }
}

void angulos(int v[])
{
    int aux, mi = 0, h = 0;

    for (int i = 1; i <= 720; i++)
    {
        if (i % 12 == 0 && h <= 12)
        {
            h++;
        }
        else if (h == 12)
        {
            h = 0;
        }

        if (mi <= 60)
        {
            mi++;
        }
        else
        {
            mi = 0;
        }

        aux = abs((h * 30) - (6 * mi));

        if (aux <= 180)
        {
            v[aux] = 1;
        }
        // cout << aux << endl;
        // cout << h << endl;
        // cout << min << endl;
        // cout << cond << endl;
    }
}

void zeravetor(int v[181])
{
    for (int i = 0; i < 181; i++)
    {
        v[i] = 0;
    }
}