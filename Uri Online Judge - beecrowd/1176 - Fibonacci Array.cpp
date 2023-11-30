#include <iostream>

long long int fibonacci(int);

int main()
{
    int T;

    std::cin >> T;

    for (int i = 0; i < T; i++)
    {
        int N;

        std::cin >> N;

        std::cout << "Fib(" << N << ") = " << fibonacci(N) << std::endl;
    }

    return 0;
}

long long int fibonacci(int n)
{
    long long int a = 0, p = 1, aux;

    for (int i = 0; i < n; i++)
    {
        aux = a;
        a = p;
        p += aux;
    }

    return a;
}