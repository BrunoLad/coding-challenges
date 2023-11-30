// ascending and descending
#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cin >> x >> y;

    while (x != y)
    {
        if (x > y)
        {
            cout << "Decrescente" << endl;
        }
        else
        {
            cout << "Crescente" << endl;
        }
        cin >> x >> y;
    }

    return 0;
}
