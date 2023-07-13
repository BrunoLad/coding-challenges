#include <iostream>

using namespace std;

int main()
{
    int n;

    while (cin >> n)
    {

        int m[n], p = 0;
        char l[n];

        for (int i = 0; i < n; i++)
        {
            cin >> m[i] >> l[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (m[i] != -1)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (m[j] != -1)
                    {
                        if (m[i] == m[j] && l[i] != l[j])
                        {
                            p++;
                            m[j] = -1;
                            break;
                        }
                    }
                }
            }
        }

        cout << p << endl;
    }

    return 0;
}