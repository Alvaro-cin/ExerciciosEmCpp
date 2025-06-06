#include <iostream>
using namespace std;
int main()
{
    float a[12], b[12], c[12][2];
    for (int i = 0; i < 12; i++)
    {
        cout << "Digite o " << i + 1 << " número: ";
        cin >> a[i];
        c[i][0] = a[i] * 2;
    }
    cout << "Números de B: " << endl;
    for (int i = 0; i < 12; i++)
    {
        cout << "Digite o " << i + 1 << " número: ";
        cin >> b[i];
        c[i][1] = b[i] - 5;
    }
    for (int i = 0; i < 12; i++)
    {

        cout << c[i][0] << " " << c[i][1] << endl;
    }
}