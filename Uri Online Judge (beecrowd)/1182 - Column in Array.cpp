#include <iostream>
#include <iomanip>

void desalocaMatriz(float **);
float soma(float **, int);

int main()
{
    int C;
    char op;
    float **M;

    std::cin >> C >> op;

    M = new float *[12];

    for (int i = 0; i < 12; i++)
    {

        M[i] = new float[12];
        for (int j = 0; j < 12; j++)
        {
            std::cin >> M[i][j];
        }
    }

    if (op == 'S')
    {
        std::cout << std::fixed << std::setprecision(1) << soma(M, C) << std::endl;
    }
    else
    {
        std::cout << std::fixed << std::setprecision(1) << soma(M, C) / 12.0f << std::endl;
    }

    desalocaMatriz(M);
}

void desalocaMatriz(float **M)
{
    for (int i = 0; i < 12; i++)
    {
        delete M[i];
    }

    delete M;
}

float soma(float **M, int C)
{
    float s = 0;

    for (int i = 0; i < 12; i++)
    {
        s += M[i][C];
    }
    return s;
}