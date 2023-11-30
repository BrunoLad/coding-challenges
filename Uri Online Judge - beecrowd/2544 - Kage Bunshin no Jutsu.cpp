#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    int N;

    while (std::cin >> N)
    {

        std::cout << std::fixed << std::setprecision(0) << floor(log2(N)) << std::endl;
        // std::cin >> N;
    }

    return 0;
}