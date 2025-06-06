#include <iostream>
using namespace std;
int main()
{
    long long a[5][4], c[5][4];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Digite o numero dos indices " << i + 1 << " e " << j + 1 << " :";
            cin >> a[i][j];
            if (a[i][j] == 0)
            {
                break;
            }
            long long fat = 1;
            for (int x = 1; x <= a[i][j]; x++)
            {
                fat *= x;
            }
            c[i][j] = fat;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "  " << c[i][j];
        }
        cout << endl;
    }
}