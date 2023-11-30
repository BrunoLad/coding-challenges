#include <iostream>
#include <string>

using namespace std;

int main()
{
    string clas, grupo, ali, ani;

    cin >> clas >> grupo >> ali;

    if (clas == "vertebrado")
    {
        if (grupo == "ave")
        {
            if (ali == "carnivoro")
            {
                ani = "aguia";
            }
            else
            {
                ani = "pomba";
            }
        }
        else
        {
            if (ali == "onivoro")
            {
                ani = "homem";
            }
            else
            {
                ani = "vaca";
            }
        }
    }
    else
    {
        if (grupo == "inseto")
        {
            if (ali == "hematofago")
            {
                ani = "pulga";
            }
            else
            {
                ani = "lagarta";
            }
        }
        else
        {
            if (ali == "hematofago")
            {
                ani = "sanguessuga";
            }
            else
            {
                ani = "minhoca";
            }
        }
    }

    cout << ani << endl;

    return 0;
}
