#include <iostream>
using namespace std;
void hashtags(int n)
{
    char mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat[i][j] = '#';
            cout << mat[i][j];
        }
        cout << endl;
    }
}
int main()
{
    cout << "Digite um numero inteiro: ";
    int n;
    cin >> n;
    hashtags(n);
}