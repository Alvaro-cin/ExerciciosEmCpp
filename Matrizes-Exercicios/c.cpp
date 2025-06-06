#include <iostream>
using namespace std;
int main()
{
    int a[4][5];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5 ; j++)
        {
            cout << "Digite o número para posição [" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5 ; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}