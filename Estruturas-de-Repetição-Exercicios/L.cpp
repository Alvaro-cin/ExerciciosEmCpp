#include <iostream>
using namespace std;
int main()
{
    int a;
    unsigned long long fatorial, soma = 0;
    for (int cont = 1; cont <= 15; cont++)
    {
        cout << "Digite o " << cont << " Numero: ";
        cin >> a;
        fatorial = 1;
        for (int i = 1; i <= a; i++)
        {
            fatorial *= i;
        }
        soma = soma + fatorial;
    }
    cout << "Soma dos fatoriais: " << soma << endl;
}