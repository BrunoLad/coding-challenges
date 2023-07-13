#include <iostream>

int main()
{
    int N;
    std::cin >> N;

    while (std::cin)
    {

        if (N == 0)
        {
            std::cout << "vai ter copa!" << std::endl;
        }
        else
        {
            std::cout << "vai ter duas!" << std::endl;
        }

        std::cin >> N;
    }

    return 0;
}