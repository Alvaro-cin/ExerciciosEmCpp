#include <iostream>
using namespace std;

int main()
{
    int vet[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> vet[i];
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i != j && vet[i] == vet[j])
            {
                cout << "Valor repetido: " << vet[i] << " nas posicoes " << i << " e " << j << endl;
            }
            else
            {
                cout << "Nenhum Número Repetido";
            }
        }
    }
}
