
#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cout << "Me Informe um Numero: ";
    cin >> a;
    cout << "Me Informe outro Numero: ";
    cin >> b;
    cout << "Me Informe outro Numero: ";
    cin >> c;
    cout << "Me Informe outro Numero: ";
    cin >> d;
    cout << "Aqui estao os valores que são divisiveis por 2 e 3: " << endl;
    if (a % 2 == 0 && a % 3 == 0)
    {
        cout << a << " ";
    }
    if (b % 2 == 0 && b % 3 == 0)
    {
        cout << b << " ";
    }
    if (c % 2 == 0 && c % 3 == 0)
    {
        cout << c << " ";
    }
    if (d % 2 == 0 && d % 3 == 0)
    {
        cout << d << " ";
    }
}
