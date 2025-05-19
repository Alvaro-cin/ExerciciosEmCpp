#include <iostream>
using namespace std;

int main()
{
    int vet[5];
    int vetid[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Pessoa " << i+1 << " digite sua idade: ";
        cin >> vet[i];
        cout << "Pessoa " << i+1 << " digite sua altura: ";
        cin >> vetid[i];
    }
    cout << "Ordem das idades inversas " << endl;
    for (int i = 4; i >= 0; i--)
    {
        cout << vet[i] << " ";
    }
    cout << "Ordem das alturas inversas ";
    for (int i = 4; i >= 0; i--)
    {
        cout << vetid[i] << " ";
    }
}
