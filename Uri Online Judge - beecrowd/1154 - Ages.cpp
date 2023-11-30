// ages
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n, s = 0, q = 0;

    cin >> n;

    while (n > -1)
    {
        s += n;
        q++;
        cin >> n;
    }

    printf("%.2f\n", float(s) / float(q));

    return 0;
}
