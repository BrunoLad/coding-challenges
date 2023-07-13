// fixed password
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;

    cin >> s;

    while (s != "2002")
    {
        cout << "Senha Invalida" << endl;
        cin >> s;
    }

    cout << "Acesso Permitido" << endl;

    return 0;
}
