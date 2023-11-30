#include <iostream>
#include <iomanip>

double soma(double **);
double media(double **);
void deletaM(double **);

int main()
{
    double **M;
    char op;

    std::cin >> op;

    M = new double *[12];

    for (int i = 0; i < 12; i++)
    {
        M[i] = new double[12];

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

double soma(double **M)
{
    double s = 0;

    for (int i = 11; i > 6; i--)
    {
        for (int j = 12 - i; j < i; j++)
        {
            s += M[i][j];
        }
    }

    return s;
}

double media(double **M)
{
    return ((soma(M)) / 30.0f);
}

void deletaM(double **M)
{
    for (int i = 0; i < 12; i++)
    {
        delete M[i];
    }

    delete M;
}