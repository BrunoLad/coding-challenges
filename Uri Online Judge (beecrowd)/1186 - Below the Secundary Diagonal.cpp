#include <iostream>
#include <iomanip>

float soma(float **);
float media(float **);
void deletaM(float **);

int main()
{
    float **M;
    char op;

    std::cin >> op;

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
        std::cout << std::fixed << std::setprecision(1) << soma(M) << std::endl;
    }
    else
    {
        std::cout << std::fixed << std::setprecision(1) << media(M) << std::endl;
    }

    deletaM(M);

    return 0;
}

float soma(float **M)
{
    float s = 0;

    for (int i = 1; i < 12; i++)
    {
        for (int j = 11; j > (11 - i); j--)
        {
            s += M[i][j];
        }
    }

    return s;
}

float media(float **M)
{
    return ((soma(M)) / 66.0f);
}

void deletaM(float **M)
{
    for (int i = 0; i < 12; i++)
    {
        delete M[i];
    }

    delete M;
}