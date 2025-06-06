#include <iostream>
using namespace std;
int main()
{
    int cont = 0, cont2 = 1, a[7][7], b[7][7];

    for (int i = 0; i < 7; i++)
    {

        for (int j = 0; j < 7; j++)
        {
            cont = 0;
            cont2 = 1;
            cout << "Digite o número para posição [" << i << "][" << j << "]: ";
            cin >> a[i][j];
            if (i % 2 == 1 && j % 2 == 1 && i==j)
            {
                for (int k = 1; k <= a[i][j]; k++)
                {
                    cont2 *= k;
                }
                b[i][j] = cont2;
            }
            else
            {
                for (int k = 1; k <= a[i][j]; k++)
                {
                    cont += k;
                }
                b[i][j] = cont;
            }
        }
    }
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}