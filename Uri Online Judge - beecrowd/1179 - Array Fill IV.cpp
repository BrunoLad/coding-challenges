#include <iostream>

void printaArray(int *, char, int);

int main()
{
    int *par, *impar, contp = 0, conti = 0, N;

    par = new int[5];
    impar = new int[5];

    for (int i = 0; i < 15; i++)
    {

        if (contp == 5)
        {
            printaArray(par, 'p', 5);
            contp = 0;
        }

        if (conti == 5)
        {
            printaArray(impar, 'i', 5);
            conti = 0;
        }

        std::cin >> N;

        if (N % 2 == 0)
        {
            par[contp] = N;
            contp++;
        }
        else
        {
            impar[conti] = N;
            conti++;
        }
    }

    if (conti != 0)
    {
        printaArray(impar, 'i', conti);
    }
    if (contp != 0)
    {
        printaArray(par, 'p', contp);
    }

    delete par, impar;

    return 0;
}

void printaArray(int *v, char t, int n)
{
    if (t == 'p')
    {
        for (int i = 0; i < n; i++)
        {
            std::cout << "par[" << i << "] = " << *(v + i) << std::endl;
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            std::cout << "impar[" << i << "] = " << *(v + i) << std::endl;
        }
    }
}