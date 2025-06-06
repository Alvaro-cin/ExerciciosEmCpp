#include <iostream>
using namespace std;
int main()
{
    int a[5][3], b[5][3], c[5][3];
    cout << "Matriz A: " << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Digite o número para o indice na linha " << i << " e coluna " << j << " ";
            cin >> a[i][j];
        }
    }
    cout << "Matriz B: " << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Digite o número para o indice na linha " << i << " e coluna " << j << " :";
            cin >> b[i][j];
        }
    }
    cout << "Matriz C: " << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
             cout << c[i][j] << " ";
        }
       cout << endl;
    }

}