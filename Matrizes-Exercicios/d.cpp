#include <iostream>
using namespace std;
int main()
{
    long long a[10], c[10][3];
    for (int i = 0; i < 10; i++)
    {
        cout << "Digite o " << i + 1 << "º " << " número: ";
        cin >> a[i];
        c[i][0] = a[i] + 5;
        long long fat = 1;
        for (int j = 1; j <= a[i]; j++)
        {
            fat *= j;
        }
        c[i][1] = fat;

        c[i][2] = a[i] * a[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << c[i][0] << " " << c[i][1] << " " << c[i][2];
        cout << endl;
    }

}
