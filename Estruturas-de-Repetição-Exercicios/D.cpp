#include <iostream>
using namespace std;
int main()
{
    int b = 0;
    for (int a = 0; a <= 500; a++)
    {
        if (a % 2 == 0)
        {
            b += a;
        }
    }
    cout << " somatório dos valores pares existentes na faixa de 1 até 500: " << b;
}