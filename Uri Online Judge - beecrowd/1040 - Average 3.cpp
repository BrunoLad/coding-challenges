#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    float n1, n2, n3, n4, media, e;

    cin >> fixed >> setprecision(1) >> n1;
    cin >> fixed >> setprecision(1) >> n2;
    cin >> fixed >> setprecision(1) >> n3;
    cin >> fixed >> setprecision(1) >> n4;

    media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10;

    cout << "Media: " << fixed << setprecision(1) << floor(media * 10) / 10 << endl;
    if (media >= 7)
    {
        cout << "Aluno aprovado." << endl;
    }
    else
    {
        if (media < 5)
        {
            cout << "Aluno reprovado." << endl;
        }
        else
        {
            cout << "Aluno em exame." << endl;
            cin >> fixed >> setprecision(1) >> e;
            cout << "Nota do exame: " << e << endl;
            media = (media + e) / 2;
            if (media >= 5)
            {
                cout << "Aluno aprovado." << endl;
                cout << "Media final: " << fixed << setprecision(1) << floor(media * 10) / 10 << endl;
            }
            else
            {
                cout << "Aluno reprovado." << endl;
                cout << "Media final: " << fixed << setprecision(1) << floor(media * 10) / 10 << endl;
            }
        }
    }

    return 0;
}