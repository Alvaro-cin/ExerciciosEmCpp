#include <iostream>
using namespace std;
int main()
{
    int a[15][15], cont = 0, cont2 = 0;
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            cont = 0;
            cout << "Digite o número para posição [" << i << "][" << j << "]: ";
            cin >> a[i][j];
            if (a[i][j] % 2 == 0 && i == j)
            {
                for (int k = 1; k <= a[i][j]; k++)
                {
                    cont += k;
                    
                }
            }
            cont2 += cont;
        }
    }
    if (cont == 0)
    {
        cout << "Não tem numeros pares na diagonal principal ";
    }
    else
    {
        cout << "O somatorio dos números pares na diagonal primcipal e: " << cont2;
    }
}