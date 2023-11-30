#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int C, M, N, X, Y, x, y;

    cin >> C;

    for (int i = 0; i < C; i++)
    {
        cin >> M >> N >> X >> Y;

        int parede[M][N];
        x = X - 1;
        y = Y - 1;

        for (int j = 0; j < M; j++)
        {
            for (int k = 0; k < N; k++)
            {
                cin >> parede[j][k];
            }
        }

        parede[x][y] += 10;

        for (int j = 0; j < M; j++)
        {
            for (int k = 0; k < N; k++)
            {
                if (k == y && x == j)
                {
                }
                else
                {
                    // cout << abs(j-x) << endl;
                    // if((abs(k-Y)==1 && abs(j-X)==1)||(abs(k-Y)==0 && abs(j-X)==1)||(abs(k-Y)==1 && abs(j-X)==0)){
                    if (abs(k - y) == abs(j - x) && abs(k - y) < 10)
                    {
                        // parede[j][k]+=9;
                        //  no caso de ser na diagonal
                        parede[j][k] += (10 - abs(k - y));
                    }
                    else if (k == y && abs(j - x) < 10)
                    {
                        parede[j][k] += (10 - abs(j - x));
                        // caso forem na mesma coluna será incremenado em relação a linha
                    }
                    else if (j == x && (abs(k - y) < 10))
                    {
                        parede[j][k] += (10 - abs(k - y));
                        // caso forem na mesma linha será incrementado em relação a coluna
                        // cout << "oi" << endl;
                    }
                    else if (abs(k - y) < 10 && abs(j - x) < 10)
                    {
                        parede[j][k] = abs(k - y) > abs(j - x) ? parede[j][k] + (10 - abs(k - y)) : parede[j][k] + (10 - abs(j - x));
                        // no caso de ser em alguma das proximidades que não obedeça nenhum dos casos acima
                    }
                    else
                    {
                        parede[j][k] += 1;
                        // demais casos
                    }
                }
            }
        }

        cout << "Parede " << i + 1 << ":" << endl;
        for (int j = 0; j < M; j++)
        {
            for (int k = 0; k < N - 1; k++)
            {
                cout << parede[j][k] << " ";
            }
            cout << parede[j][N - 1] << endl;
        }
    }

    return 0;
}
