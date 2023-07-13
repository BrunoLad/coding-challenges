#include <iostream>

void zeraV(int *);

int main()
{
    int Q, v[101], total = 0;

    std::cin >> Q;

    for (int i = 0; i < Q; i++)
    {
        int N;

        std::cin >> N;

        zeraV(v);

        for (int j = 0; j < N; j++)
        {
            int T, P;

            std::cin >> T >> P;

            if (P >= 10 && P <= 100)
            {
                if (P > v[T] || v[T] > 100)
                {
                    v[T] = P;
                }
            }
            else
            {
                if ((v[T] < 10 || v[T] > 100) && P > v[T])
                {
                    v[T] = P;
                }
            }
        }

        for (int k = 1; k < 101; k++)
        {
            total += v[k];
        }

        std::cout << total << std::endl;
        total = 0;
    }

    return 0;
}

void zeraV(int *v)
{
    for (int i = 0; i < 101; i++)
    {
        *(v + i) = 0;
    }
}