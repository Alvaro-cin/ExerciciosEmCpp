#include <iostream>
using namespace std;
int main()
{
    float a[8][6], b[8], cont = 0;
    for (int i = 0; i < 8; i++)
    {
        b[i] = 0;
        for (int j = 0; j < 6; j++)
        {
            cout << "Digite um numero para o indice na linha " << i << " e coluna " << j << " ";
            cin >> a[i][j];
            b[i] += a[i][j];
        }
    }
    cout << "Aqui esta a matriz A: " << endl;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Aqui estao a soma de todas as linhas da matriz A:  " << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << b[i] << " ";
    }

    for (int i = 0; i < 8; i++)
    {
        cont += b[i];
    }
    cout << endl;
    cout << "Aqui esta o somatorio de  B:  " << cont;
}