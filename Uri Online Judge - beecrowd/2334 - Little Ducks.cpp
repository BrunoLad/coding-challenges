#include <iostream>
#include <iomanip>

int main()
{
    long double P;

    std::cin >> P;

    while (P != -1)
    {

        if (P)
        {
            std::cout << std::fixed << std::setprecision(0) << (P - 1) << std::endl;
        }
        else
        {
            std::cout << 0 << std::endl;
        }

        std::cin >> P;
    }

    return 0;
}