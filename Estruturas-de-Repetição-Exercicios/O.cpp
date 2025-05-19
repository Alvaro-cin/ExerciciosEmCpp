#include <iostream>
using namespace std;
int main()
{
    int a;
    unsigned long long fatorial;
    for (int cont = 1; cont <= 10; cont = cont + 2)
    {
        fatorial = 1;
        for (int i = 1; i <= cont; i++)
        {
            fatorial *= i;
        }
        cout << "O fatorial de " << cont << " é: " << fatorial << endl;
    }
}