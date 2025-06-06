#include <iostream>
using namespace std;
int main()
{
    int a[5][5], b[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Digite o número para posição [" << i << "][" << j << "]: ";
            cin >> a[i][j];
            if (i == j)
            {
                b[i][j] = a[i][j] * 3;
            }
            else
            {
                b[i][j] = a[i][j] * 2;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}