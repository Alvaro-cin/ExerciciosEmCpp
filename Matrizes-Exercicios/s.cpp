#include <iostream>
using namespace std;
int main()
{
    int a[5][6], b[5][6], c[5][6];
    bool d = false;
    for (int i = 0; i < 5 && !d; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << "Digite um numero para o indice na linha " << i << " e coluna " << j << " " << "Da matriz A ";
            cin >> a[i][j];

            if (a[i][j] % 2 != 0)
            {
                d = true;
                cout << "A matriz A so aceita Numeros pares!";
                break;
            }
        }
    }
    for (int i = 0; i < 5 && !d; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << "Digite um numero para o indice na linha " << i << " e coluna " << j << " " << "Da matriz B ";
            cin >> b[i][j];

            if (b[i][j] % 2 == 0)
            {
                d = true;
                cout << "A matriz B so aceita Numeros impares!";
                break;
            }
        }
    }
    if (!d)
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
    }
}