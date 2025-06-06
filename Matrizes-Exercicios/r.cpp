#include <iostream>
using namespace std;
int main()
{
    int a[4], b[4], c[4], d[4], e[4][4], cont = 1;
    for (int i = 0; i < 4; i++)
    {
        cont = 1;
        cout << "Digite um valor para a[" << i << "]: ";
        cin >> a[i];
        e[0][i] = a[i] * 2;
        cout << "Digite um valor para b[" << i << "]: ";
        cin >> b[i];
        e[1][i] = b[i] * 3;
        cout << "Digite um valor para c[" << i << "]: ";
        cin >> c[i];
        e[2][i] = c[i] * 4;
        cout << "Digite um valor para d[" << i << "]: ";
        cin >> d[i];
        for (int g = 1; g <= d[i]; g++)
        {
            cont *= g;
            
        }
        e[3][i] = cont;
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << e[i][j] << " ";
        }
        cout << endl;
    }
}
