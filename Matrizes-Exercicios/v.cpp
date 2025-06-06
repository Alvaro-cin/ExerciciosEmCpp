#include <iostream>
using namespace std;

int main()
{
    int a[5][5], b[5][5], c[5][5];

    // Leitura da matriz A (valores que NÃO sejam divisíveis por 3)
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            do
            {
                cout << "Digite um numero para A[" << i << "][" << j << "] (nao divisivel por 3): ";
                cin >> a[i][j];

                if (a[i][j] % 3 == 0)
                {
                    cout << "Valor invalido! Nao pode ser divisivel por 3.\n";
                }

            } while (a[i][j] % 3 == 0);
        }
    }

    // Leitura da matriz B (valores que NÃO sejam divisíveis por 6)
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            do
            {
                cout << "Digite um numero para B[" << i << "][" << j << "] (nao divisivel por 6): ";
                cin >> b[i][j];

                if (b[i][j] % 6 == 0)
                {
                    cout << "Valor invalido! Nao pode ser divisivel por 6.\n";
                }

            } while (b[i][j] % 6 == 0);
        }
    }

    // Construção da matriz C (soma de A + B)
    cout << "\nMatriz C (soma de A + B):\n";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
