#include <iostream>

int main()
{
    float o, b, i;

    std::cin >> o >> b >> i;

    if (o < b && o < i)
    {
        std::cout << "Otavio" << std::endl;
    }
    else
    {
        if (b < o && b < i)
        {
            std::cout << "Bruno" << std::endl;
        }
        else
        {
            if (i < b && i < o)
            {
                std::cout << "Ian" << std::endl;
            }
            else
            {
                std::cout << "Empate" << std::endl;
            }
        }
    }

    return 0;
}