#include <iostream>
using namespace std;
int main()
{
    float matriz[5][5], cont = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matriz[i][j];
            if (i == j)
            {
                cont += matriz[i][j];
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    

    cout << " Soma da diagonal principal: " <<  cont;
}