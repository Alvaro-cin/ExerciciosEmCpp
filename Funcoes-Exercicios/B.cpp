#include <iostream>
using namespace std;
void trianguloexistente(int a, int b, int c)
{
    if (a + b > c && a + c > b && b + c > a)
    {
        cout << "Os lados formam um triangulo." << endl;
    }
    else
    {
        cout << "Os lados nao formam um triangulo." << endl;
    }
}
int main()
{
    cout << "Digite o valor do lado A: ";
    int n1;
    cin >> n1;
    cout << "Digite o valor do lado B: ";
    int n2;
    cin >> n2;
    cout << "Digite o valor do lado C: ";
    int n3;
    cin >> n3;
    trianguloexistente(n1, n2, n3);
}