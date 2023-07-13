#include <iostream>

using namespace std;

int main()
{
    int n, maior = 0, indice = 0, maior2, indice2;

    cin >> n;

    while (n)
    {
        int v[n];
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] > maior)
            {
                maior2 = maior;
                indice2 = indice;
                maior = v[i];
                indice = i + 1;
            }
            else if (v[i] > maior2)
            {
                maior2 = v[i];
                indice2 = i + 1;
            }
        }

        cout << indice2 << endl;
        cin >> n;

        maior = 0;
        maior2 = 0;
    }

    return 0;
}
