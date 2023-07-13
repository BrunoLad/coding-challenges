#include <iostream>

using namespace std;

int main()
{
    int x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;

    while (x1 != 0 && y1 != 0 && x2 != 0 && y2 != 0)
    {
        if (x1 < 1 || x1 > 8 || x2 < 1 || x2 > 8 || y1 < 1 || y1 > 8 || y2 < 1 || y2 > 8)
        {

            // limiting the input values
        }
        else
        {

            if (x1 == x2 && y1 == y2)
            {
                cout << 0 << endl;
                // in case they are equal
            }
            else
            {
                if (x1 == x2 || y1 == y2 || unsigned(x1 - x2) == unsigned(y1 - y2) || unsigned(x2 - x1) == unsigned(y2 - y1) || unsigned(x1 - x2) == unsigned(y2 - y1) || unsigned(x1 - x2) == unsigned(y2 - y1))
                {
                    // all the sideway cases, and front and back
                    cout << 1 << endl;
                }
                else
                {
                    cout << 2 << endl;
                    // all the rest of the movements are equal to 2
                }
            }
        }

        cin >> x1 >> y1 >> x2 >> y2;
    }

    return 0;
}
