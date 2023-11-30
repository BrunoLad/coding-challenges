#include <iostream>

using namespace std;

int main()
{
    int age, aux;

    cin >> age;

    aux = age % 365;

    if (aux >= 0 && age >= 365)
    {
        cout << (age - aux) / 365 << " ano(s)" << endl;
        age -= (age - aux);
    }
    else
    {
        cout << 0 << " ano(s)\n";
    }

    aux = age % 30;

    if (aux >= 0 && age >= 30)
    {
        cout << (age - aux) / 30 << " mes(es)\n";
        age -= (age - aux);
    }
    else
    {
        cout << 0 << " mes(es)\n";
    }

    cout << age << " dia(s)\n";

    return 0;
}