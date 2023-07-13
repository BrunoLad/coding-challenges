#include <iostream>

using namespace std;

int main()
{
    int n;
    int val = 0;
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    cin >> n;

    while (n != 0)
    {

        for (int i = n; i > 0; i--)
        {
            val = val + (i * i);
        }
        cout << val << endl;
        val = 0;
        cin >> n;
    }

    return 0;
}