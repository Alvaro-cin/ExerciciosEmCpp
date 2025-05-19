#include <iostream>
using namespace std;

int main()
{
    int vet[5], cont = 0, n1, n2;
    for (int i = 0; i < 5; i++)
    {
        cout << "Digite o " << i + 1 << "º numero: ";
        cin >> vet[i];
    }
    cout << "Digite o numero que quer verificar: ";
    cin >> n1;
    for (int j = 0; j < 5; j++)
    {
        if (vet[j] == n1)
        {
            cont++;
        }
    }
    if (cont > 0)
    {
        cout << "Esse numero existe neste vetor, me diga outro: ";
        cin >> n2;
    }
    else
    {
        cout << "Esse numero nao existe neste vetor ";
    }
}
