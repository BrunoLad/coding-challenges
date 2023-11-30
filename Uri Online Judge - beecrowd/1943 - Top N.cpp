#include <iostream>

int main()
{
    int k;

    std::cin >> k;

    if (k == 1)
    {
        std::cout << "Top " << 1 << std::endl;
    }
    else
    {
        if (k <= 3)
        {
            std::cout << "Top " << 3 << std::endl;
        }
        else
        {
            if (k <= 5)
            {
                std::cout << "Top " << 5 << std::endl;
            }
            else
            {
                if (k <= 10)
                {
                    std::cout << "Top " << 10 << std::endl;
                }
                else
                {
                    if (k <= 25)
                    {
                        std::cout << "Top " << 25 << std::endl;
                    }
                    else
                    {
                        if (k <= 50)
                        {
                            std::cout << "Top " << 50 << std::endl;
                        }
                        else
                        {
                            std::cout << "Top " << 100 << std::endl;
                        }
                    }
                }
            }
        }
    }

    return 0;
}