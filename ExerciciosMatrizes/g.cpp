#include <iostream>
using namespace std;
int main()
{
    float a[4][5], b[4][5];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Digite a temperatura em G para o indice na linha " << i << " e coluna " << j << " ";
            cin >> a[i][j];
            b[i][j] = (a[i][j] * 1.8) + 32;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
           cout <<  a[i][j] << " ";
        }
        cout << endl;
    }
     for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
           cout <<  b[i][j] << " ";
        }
        cout << endl;
    }
}