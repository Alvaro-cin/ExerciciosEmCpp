#include <iostream>
using namespace std;

int main()
{
    int vetor[4];
    float b = 0;
    for (int i = 0; i < 4; i++)
    {
        cout << "Digite a nota: ";
        cin >> vetor[i];
        b += vetor[i];
    }
    cout << "As notas sao: ";
    for (int i = 0; i < 4; i++)
    {
        cout << vetor[i] << " ";
    }
    cout << "A media e: " << b / 4;
}
