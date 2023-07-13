#include <iostream>

using namespace std;

int caixa()
{
    int n, k, auxk, cont = 0, help;
    bool cond = true;

    cin >> n >> k;
    int p[n], s[n], aux[n];

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        // o peso dos livros
    }

    for (int i = 0; i < n; i++)
    {
        aux[i] = 0;
        // vetor para guardar a soma
    }

    s[0] = 1;
    cont++;
    auxk = 1;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (p[i] > p[j] && j == (i - 1))
            {
                auxk++;
                s[cont] = auxk;
                cont++;
                // caso n�o se encaixe em nenhuma pilha, ele cria uma nova
            }
            else
            {
                /*if(p[i] <= p[j] && aux[0] == 0){
                    aux[j] += p[i];
                    //auxcont ++;
                    s[cont] = auxk;
                    cont ++;
                    break;
                }else{*/
                if (aux[j] != -1)
                {
                    help = j;
                    // pra pegar o �ltimo valor v�lido da soma
                }
                if ((p[i] + aux[j]) <= p[j] && aux[j] != -1)
                {
                    aux[j] += p[i];
                    aux[i] = -1;
                    // cout << aux[j] << endl;
                    // cout << j << endl;
                    //  o "-1" serve pra pular os livros que j� fazem parte de outra pilha de livros
                    s[cont] = s[j];
                    cont++;
                    break;
                }
                else
                {
                    if (j == (i - 1) && (p[i] + aux[help]) > p[j])
                    {
                        auxk++;
                        s[cont] = auxk;
                        cont++;
                        help = 0;
                        // depois de percorrido todo, se a soma for maior (mesmo o n�mero sozinho n�o sendo) cria uma nova pilha
                    }
                }
            }
        }
        if (auxk > k)
        {
            cout << "IMP" << endl;
            cond = false;
            break;
        }
    }

    if (cond)
    {
        for (int i = 0; i < cont; i++)
        {
            if ((i - 1) == cont)
            {
                cout << s[i] << endl;
            }
            else
            {
                cout << s[i] << " ";
            }
        }
    }

    return 0;
}
