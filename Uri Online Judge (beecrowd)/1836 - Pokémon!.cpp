#include <iostream>
#include <cmath>

int status(int, int, int, int);
int hp(int, int, int, int);

int main()
{
    int T;
    int l, bhp, ivhp, evhp, ba, iva, eva, bd, ivd, evd, bsp, ivsp, evsp;
    std::string pokemon;

    std::cin >> T;

    for (int i = 1; i <= T; i++)
    {
        std::cin >> pokemon >> l;
        std::cin >> bhp >> ivhp >> evhp;
        std::cin >> ba >> iva >> eva;
        std::cin >> bd >> ivd >> evd;
        std::cin >> bsp >> ivsp >> evsp;

        std::cout << "Caso #" << i << ": " << pokemon << " nivel " << l << std::endl;
        std::cout << "HP: " << hp(bhp, ivhp, l, evhp) << std::endl;
        std::cout << "AT: " << status(ba, iva, l, eva) << std::endl;
        std::cout << "DF: " << status(bd, ivd, l, evd) << std::endl;
        std::cout << "SP: " << status(bsp, ivsp, l, evsp) << std::endl;
    }

    return 0;
}

int status(int Bs, int IV, int L, int EV)
{
    int s;

    s = (((IV + Bs + (sqrt(EV) / 8)) * L) / 50) + 5;

    return s;
}

int hp(int bhp, int iv, int l, int ev)
{
    int hpr;

    hpr = (((iv + bhp + (sqrt(ev) / 8) + 50) * l) / 50) + 10;

    return hpr;
}