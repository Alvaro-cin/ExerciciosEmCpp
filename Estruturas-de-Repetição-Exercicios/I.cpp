#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, proximo;
    cout << "Série de Fibonacci: ";
    for (int i = 1; i <= 15; i++)
    {
        cout << a << " ";
        proximo = a + b;
        a = b;
        b = proximo;
    }
}