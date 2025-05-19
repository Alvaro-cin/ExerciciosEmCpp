#include <iostream>
using namespace std;
int main()
{
    int v1, maior = 0, menor = 0;
    cin >> v1;
    if (v1 < 0)
    {
        cout << "Numero invalido ";
        return 0;
    }
    maior = v1;
    menor = v1;
    while (v1 > 0)
    {
        cin >> v1;
        if (v1 < 0)
        {
            break;
        }
        if (v1 > maior)
        {
            maior = v1;
        }
        if (v1 < menor)
        {
            menor = v1;
        }
    }
    cout << "O maior é: " << maior << " o menor é:  " << menor;
}