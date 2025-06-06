#include <iostream>
using namespace std;
int main()
{
    int a[4][5], b[4], c[5], cont1 = 0, cont2 = 0;
    for (int i = 0; i < 5; i++)
    {

        c[i] = 0;
    }

    for (int i = 0; i < 4; i++)
    {
        b[i] = 0;
        for (int j = 0; j < 5; j++)
        {

            cout << "Digite um numero para o indice na linha " << i << " e coluna " << j << ": ";
            cin >> a[i][j];
            b[i] += a[i][j];
            c[j] += a[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Elementos de B: ";
    for (int i = 0; i < 4; i++)
    {
        cout << b[i] << " ";
        cont1 += b[i];
    }
    cout << endl;
    cout << "Elementos de C: ";
    for (int i = 0; i < 5; i++)
    {
        cout << c[i] << " ";
        cont2 += c[i];
    }
    cout << "o somatório dos elementos da matriz B com o somatório dos elementos da matriz C é : " << cont1 + cont2;
}