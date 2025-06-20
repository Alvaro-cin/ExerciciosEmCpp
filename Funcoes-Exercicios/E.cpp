#include <iostream>
using namespace std;
void nperfeito(int n)
{
    int cont = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            cont += i;
        }
    }
    if (cont == n)
    {
        cout << "O numero " << n << " e perfeito." << endl;
    }
    else
    {
        cout << "O numero " << n << " nao e perfeito." << endl;
    }
}
int main()
{
    cout << "Digite um numero qualqier: ";
    int a;
    cin >> a;
    nperfeito(a);
}