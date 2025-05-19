#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c, delta, x1, x2;
    cout << "Me diga os valores de a b e c de sua equação do segundo grau:\n";
    cin >> a >> b >> c;
    delta = b * b - 4 * a * c;
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    if (delta < 0)
    {
        cout << "Não há Solução Real\n";
    }
    if (delta > 0)
    {
        cout << "Há duas Soluções Reais e Diferentes\n";
    }
    if (delta == 0)
    {
        cout << "Há Apenas uma Solução Real\n";
    }
    cout << "x1: "<< x1 << " x2: " << x2;
}