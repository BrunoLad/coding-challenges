// population increase
#include <iostream>

using namespace std;

int main()
{
    int t, pa, pb, time = 0;
    double g1, g2;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> pa >> pb >> g1 >> g2;

        g1 /= 100;
        g2 /= 100;

        while (pa <= pb && time <= 100)
        {
            pa = pa + (pa * g1);
            pb = pb + (pb * g2);
            time++;
        }

        if (time < 101)
        {
            cout << time << " anos." << endl;
        }
        else
        {
            cout << "Mais de 1 seculo." << endl;
        }

        time = 0;
    }

    return 0;
}
