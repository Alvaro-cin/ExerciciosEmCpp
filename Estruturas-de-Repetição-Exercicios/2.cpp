#include <iostream>
using namespace std;

int main()
{
    int soma = 0;

    for (int j = 1; j <= 900; j++)
    {
        soma = soma + j;
    }

    cout << "A soma de todos os numeros de 1 a 900 é : " << soma;
}