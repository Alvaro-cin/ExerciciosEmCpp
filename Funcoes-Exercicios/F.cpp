#include <iostream>
using namespace std;
void contrario(int vet[], int j)
{
    for (int i = j-1; i >=0; i--)
    {
        cout << vet[i];
    }
    cout << endl;
}

int digito(int b)
{
    int cont = 0;
    while (b > 0)
    {
        b = b / 10;
        cont++;
    }
    return cont;
}
int main()
{
    cout << "Digite um numero: ";
    int n;
    cin >> n;
    int j = digito(n);
    cout << "O numero de digitos e: " << j << endl;
    int vet[j];
   int num = n;


    // Preenche o vetor com os dígitos do número, do último para o primeiro
    for (int i = 0; i < j; i++) {
        vet[i] = num % 10;  // pega o último dígito
        num = num / 10;     // remove o último dígito
    }
    contrario(vet, j);
}