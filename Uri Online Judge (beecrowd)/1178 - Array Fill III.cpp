#include <iostream>
#include <iomanip>

int main()
{
    double X, *N;

    N = new double[100];

    std::cin >> X;

    *N = X;

    for (int i = 1; i < 100; i++)
    {
        *(N + i) = *(N + i - 1) / 2.0;
    }

    for (int i = 0; i < 100; i++)
    {
        std::cout << "N[" << i << "] = " << std::fixed << std::setprecision(4) << *(N + i) << std::endl;
    }

    delete N;

    return 0;
}