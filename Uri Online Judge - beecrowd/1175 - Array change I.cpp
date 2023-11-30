#include <iostream>

int main()
{
    int *N;
    int aux;

    N = new int[20];

    for (int i = 0; i < 20; i++)
    {
        std::cin >> *(N + i);
    }

    for (int i = 0; i < 10; i++)
    {
        aux = *(N + i);
        *(N + i) = *(N + 19 - i);
        *(N + 19 - i) = aux;
    }

    for (int i = 0; i < 20; i++)
    {
        std::cout << "N[" << i << "] = " << *(N + i) << std::endl;
    }

    delete N;

    return 0;
}