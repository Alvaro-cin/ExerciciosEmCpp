#include <iostream>
using namespace std;
int main()
{
    int a[7][7], cont = 0;

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            cout << "Digite um numero para o indice na linha " << i << " e coluna " << j << " ";
            cin >> a[i][j];
            if (a[i][j] % 2 == 0)
            {
                cont ++ ;
            }
            
        }
    }
    cout << "A quantidade de números pares e: " << cont;
}
