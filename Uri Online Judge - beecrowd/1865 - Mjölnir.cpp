#include <iostream>
#include <string>

int main()
{
    int C;

    std::cin >> C;

    for (int i = 0; i < C; i++)
    {
        std::string nome;
        int N;
        std::cin >> nome >> N;

        if (nome == "Thor")
        {
            std::cout << "Y" << std::endl;
        }
        else
        {
            std::cout << "N" << std::endl;
        }
    }

    return 0;
}