#include <iostream>
using namespace std;
int main()
{
    cout << "Valores numéricos inteiros ímpares situados na faixa de 0 a 20: ";
    for (int a = 0; a <= 20; a++)
    {
        if (a % 2 != 0)
        {
            cout << a << " ";
        }
    }
}