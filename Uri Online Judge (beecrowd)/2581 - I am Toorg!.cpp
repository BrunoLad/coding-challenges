#include <iostream>
#include <string>

int main()
{
    int N;

    std::cin >> N;

    std::cin.clear();

    for (int i = 0; i < N; i++)
    {
        std::string s;
        std::cin >> s;
        getline(std::cin, s);

        std::cout << "I am Toorg!" << std::endl;
    }

    return 0;
}