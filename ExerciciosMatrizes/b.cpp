#include <iostream>
using namespace std;
int main()
{
    int a[7], b[7], c[7][2];
    for (int i = 0; i < 7; i++)
    {
        cout << "Me informe o " << i + 1 << " número: ";
        cin >> a[i];
        c[i][0] = a[i];
    }
    cout << "Números de B :" << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << "Me informe o " << i + 1 << " número: ";
        cin >> b[i];
        c[i][1] = b[i];
    }
    for (int i = 0; i < 7; i++)
    {

        cout << c[i][0] << " " << c[i][1];

        cout << endl;
    }
}