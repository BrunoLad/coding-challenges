#include <iostream>

using namespace std;

int diario()
{
    char s[500];
    int cont_chave = 0, cont_col = 0, contcof = 0, contcoa = 0, contchf = 0, contcha = 0;

    while (cin >> s)
    {
        int i = 0;
        while (s[i] != '\0')
        {
            if (s[i] == '[')
            {

                if (cont_col >= 0)
                {
                    cont_col++;
                    // regular a abertura e fechamento de colchetes
                }
                contcoa++;
                // contar quantas colchetes de abertura existem
                // cout << cont_col << endl;
                // cout << i << endl;
            }
            else
            {
                if (s[i] == ']')
                {

                    cont_col--;
                    contcof++;
                    // cout << cont_col << endl;
                }
                else
                {
                    if (s[i] == '{')
                    {

                        if (cont_chave >= 0)
                        {
                            cont_chave++;
                            // regular o controle da abertura de chaves
                        }
                        contcha++;
                    }
                    else
                    {

                        cont_chave--;
                        contchf++;
                    }
                }
            }
            i++;
        }

        if (contchf == contcha && contcof == contcoa && cont_col == 0 && cont_chave == 0)
        {
            // comparar se o n�mero das que abrem batem e se o operador relacional n�o est� alterado
            cout << "consistente" << endl;
        }
        else
        {
            cout << "farsa" << endl;
        }
        cont_chave = cont_col = contcof = contcoa = contchf = contcha = 0;
    }

    return 0;
}
