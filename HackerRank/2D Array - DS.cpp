// https://www.hackerrank.com/challenges/2d-array/problem
#include <iostream>

int MAmplt(int **);

int main()
{
    int **mat, resp;

    // std::cin >> N;

    mat = new int *[6];

    for (int i = 0; i < 6; i++)
    {

        mat[i] = new int[6];

        for (int j = 0; j < 6; j++)
        {
            std::cin >> mat[i][j]; // torcer pra que não dê o mesmo bug do cadê o Wally
        }
    }

    resp = MAmplt(mat);

    std::cout << resp << std::endl;

    for (int i = 0; i < 6; i++)
    {
        delete mat[i];
    }

    delete mat;

    return 0;
}

int MAmplt(int **m)
{
    int s = 0, aux = 0;
    bool first = true;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (j > 0 && j < (5) && i < (4))
            {
                aux = m[i][j] + m[i][j - 1] + m[i][j + 1] + m[i + 1][j] + m[i + 2][j] + m[i + 2][j - 1] + m[i + 2][j + 1];
                if (aux > s)
                {
                    s = aux;
                    first = false;
                }
                else
                {
                    if (first)
                    {
                        first = false;
                        s = aux;
                    }
                }
            }
            aux = 0;
        }
    }

    return s;
}