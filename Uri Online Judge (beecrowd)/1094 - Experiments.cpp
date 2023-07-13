// experiments
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n, q, t = 0, r = 0, c = 0, s = 0;
    char a;
    float pr, pc, ps;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> q >> a;
        if (a == 'C')
        {
            c += q;
        }
        else if (a == 'R')
        {
            r += q;
        }
        else
        {
            s += q;
        }
    }
    t = c + r + s;
    pc = (float(c) / float(t)) * 100;
    pr = (float(r) / float(t)) * 100;
    ps = (float(s) / float(t)) * 100;
    cout << "Total: " << t << " cobaias" << endl;
    cout << "Total de coelhos: " << c << endl;
    cout << "Total de ratos: " << r << endl;
    cout << "Total de sapos: " << s << endl;
    printf("Percentual de coelhos: %.2f %%\n", pc);
    printf("Percentual de ratos: %.2f %%\n", pr);
    printf("Percentual de sapos: %.2f %%\n", ps);

    return 0;
}
