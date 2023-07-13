// PUM
#include <iostream>

using namespace std;

int main()
{
    int n, c = 0;

    cin >> n;

    for (int i = 1; i <= (4 * n - 1); i++)
    {

        if (c == 3)
        {
            cout << "PUM" << endl;
            c = 0;
        }
        else
        {
            cout << i << " ";
            c++;
        }
    }
    cout << "PUM" << endl;

    return 0;
}
