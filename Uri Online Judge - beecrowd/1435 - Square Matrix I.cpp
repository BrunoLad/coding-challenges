#include <iostream>
#include <stdio.h>

void insereM(int **, int, int, int);
void deletaM(int **, int);
void imprime(int **, int);

int main()
{
    int N;

    std::cin >> N;

    while (N)
    {
        int **m;

        m = new int *[N];

        for (int i = 0; i < N; i++)
        {
            m[i] = new int[N];
        }

        insereM(m, N, 0, 1);

        imprime(m, N);

        deletaM(m, N);

        std::cin >> N;
    }

    return 0;
}

void insereM(int **M, int N, int ind, int k)
{
    if (N > 0)
    {
        for (int i = ind; i < N; i++)
        {
            for (int j = ind; j < N; j++)
            {
                M[i][j] = k;
            }
        }
        N--;
        ind++;
        k++;
        insereM(M, N, ind, k);
    }
}

void deletaM(int **M, int N)
{
    for (int i = 0; i < N; i++)
    {
        delete M[i];
    }
    delete M;
}

void imprime(int **M, int N)
{

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j == 0)
            {
                printf("%3d", M[i][j]);
            }
            else
            {
                printf(" %3d", M[i][j]);
            }
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;
}
