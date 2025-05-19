#include <iostream>
using namespace std;

int main()
{
    int a[10], b[10], vet[20];
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    for (int cont = 0; cont < 10; cont++)
    {
        cin >> b[cont];
    }
    for (int j = 0; j < 10; j++)
    {
        vet[j * 2] = a[j];
        vet[j * 2 + 1] = b[j];
    }
    for (int d = 0; d < 20; d++)
    {
        cout << vet[d] << " ";
    }
}
