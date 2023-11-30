#include <iostream>

int menor(int *, int);

int main()
{
    int N, *X, pos;

    std::cin >> N;

    X = new int[N];

    for (int i = 0; i < N; i++)
    {
        std::cin >> *(X + i);
    }

    pos = menor(X, N);

    std::cout << "Menor valor: " << X[pos] << std::endl;
    std::cout << "Posicao: " << pos << std::endl;

    delete X;

    return 0;
}

int menor(int *v, int n)
{
    int menor = v[0];
    int ind = 0;
    for (int i = 1; i < n; i++)
    {
        if ((*(v + i)) < menor)
        {
            ind = i;
            menor = *(v + i);
        }
    }

    return ind;
}