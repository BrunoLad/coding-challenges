// s sequence 2
#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    float s = 1.0;
    int c = 1;

    for (int i = 3; i <= 39; i += 2)
    {
        s += (float(i) / float(pow(2, c)));
        c++;
    }

    printf("%.2f\n", s);
}
