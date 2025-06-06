#include <iostream>
using namespace std;
int main()
{
    int a[6][5], b[6][5];

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Digite um numero para o indice na linha " << i << " e coluna " << j << " ";
            cin >> a[i][j];
            if (a[i][j] % 2 == 0)
            {
                b[i][j] = a[i][j] + 5;
            }
            else
            {
                b[i][j] = a[i][j] - 4;
            }
        }
    }
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}