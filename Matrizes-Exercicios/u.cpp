#include <iostream>
using namespace std;
int main()
{
    int a[4][5], b[4][5], c[4][5];
    bool d = false;
    for (int i = 0; i < 4 && !d; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Digite um numero para o indice na linha " << i << " e coluna " << j << " " << "Da matriz A ";
            cin >> a[i][j];

            if (a[i][j] % 4 != 0 && a[i][j] % 3 != 0 )
            {
                d = true;
                cout << "A matriz A so aceita Numeros divisiveis por 3 e 4!";
                break;
            }
        }
    }
    for (int i = 0; i < 4 && !d; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Digite um numero para o indice na linha " << i << " e coluna " << j << " " << "Da matriz B ";
            cin >> b[i][j];

            if (b[i][j] % 5 != 0 || b[i][j] % 6 != 0)
            {
                d = true;
                cout << "A matriz B so aceita Numeros divisiveis por 5 ou 6!";
                break;
            }
        }
    }
    if (!d)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                c[i][j] = a[i][j] * b[i][j];
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
    }
}