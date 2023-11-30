#include <iostream>
#include <string>

using namespace std;

int main()
{
    int d;
    string c;

    cin >> d;

    switch (d)
    {
    case 61:
        c = "Brasilia";
        break;
    case 71:
        c = "Salvador";
        break;
    case 11:
        c = "Sao Paulo";
        break;
    case 21:
        c = "Rio de Janeiro";
        break;
    case 32:
        c = "Juiz de Fora";
        break;
    case 19:
        c = "Campinas";
        break;
    case 27:
        c = "Vitoria";
        break;
    case 31:
        c = "Belo Horizonte";
        break;
    default:
        c = "DDD nao cadastrado";
    }

    cout << c << endl;

    return 0;
}
