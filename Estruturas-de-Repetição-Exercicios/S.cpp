#include <iostream>
using namespace std;
int main()
{
    int dividendo, divisor, cont = 0;
    cout << "Me diga o dividendo:";
    cin >> dividendo;
    cout << "Me informe o divisor: ";
    cin >> divisor;
    while (dividendo >= divisor)
    {
        dividendo = dividendo - divisor;
        cont++;
    }
    cout << cont;
}