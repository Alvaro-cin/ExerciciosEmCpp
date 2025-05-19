#include <iostream>
using namespace std;
int main()
{
    int base, expoente, a = 1;
    cout << "Informe a base: ";
    cin >> base;
    cout << "Informe o expoente: ";
    cin >> expoente;
    for (int cont = 1; cont <= expoente; cont++)
    {
        a *= base;
    }
    cout << base << " Elevado a " << expoente << " é " << a;
}