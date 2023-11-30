// type of fuel
#include <iostream>

using namespace std;

int main()
{
    int c, a = 0, g = 0, d = 0;

    cin >> c;

    while (c != 4)
    {
        switch (c)
        {
        case 1:
            a++;
            break;
        case 2:
            g++;
            break;
        case 3:
            d++;
            break;
        case 4:
            break;
        }
        cin >> c;
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << a << endl;
    cout << "Gasolina: " << g << endl;
    cout << "Diesel: " << d << endl;

    return 0;
}
