#include <iostream>

int main()
{
    int T, *N, aux = 0;

    N = new int[1000];

    std::cin >> T;

    for (int i = 0; i < 1000; i++)
    {
        if (aux < T)
        {
            *(N + i) = aux;
        }
        else
        {
            aux = 0;
            *(N + i) = aux;
        }
        aux++;
    }

    for (int i = 0; i < 1000; i++)
    {
        std::cout << "N[" << i << "] = " << *(N + i) << std::endl;
    }

    return 0;
}