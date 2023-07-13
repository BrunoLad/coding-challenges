#include <iostream>

using namespace std;

int main()
{
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

    int n, x;
    int nums[2000];

    for (int i = 1; i <= 2000; i++)
    {
        nums[i - 1] = i;
    }

    cin >> n;

    int aux[2000];

    for (int i = 0; i < 2000; i++)
    {
        aux[i] = 0;
    }

    while (n != 0)
    {

        cin >> x;

        if (x >= 1 && x <= 2000)
        {
            for (int i = 0; i < 2000; i++)
            {
                if (x == nums[i])
                {
                    aux[i] += 1;
                    break;
                }
            }
        }
        n--;
    }

    for (int i = 0; i < 2000; i++)
    {
        if (aux[i] != 0)
        {

            cout << i + 1 << " aparece " << aux[i] << " vez(es)" << endl;
        }
    }

    return 0;
}
