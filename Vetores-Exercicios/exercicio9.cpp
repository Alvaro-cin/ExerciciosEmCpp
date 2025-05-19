#include <iostream>
using namespace std;

int main()
{
    int vet[20], cont = 0, n1;
    for (int i = 0; i < 20; i++)
    {
        cout << "Digite o " << i + 1 << "º numero: ";
        cin >> vet[i];
    }
    cout << "Digite o numero que quer encontrar: ";
    cin >> n1;
    for (int j = 0; j < 20; j++)
    {
        if (vet[j] == n1)
        {
            cont++;
        }
    }
    if (cont == 1)
    {
        cout << "O numero " << n1 << " aparece " << cont << " vez no vetor";
    }
    else
    {
        cout << "O numero " << n1 << " aparece " << cont << " vezes no vetor";
    }
}
