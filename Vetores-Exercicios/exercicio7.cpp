#include <iostream>
using namespace std;

int main()
{
    int a[10], x, cont = 0;
    string res;
    for (int i = 0; i < 10; i++)
    {
        cout << "Me informe o " << i + 1 << "º numero: ";
        cin >> a[i];
    }
    cout << "Informe um numero para buscar: ";
    cin >> x;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] == x)
        {
            cont++;
        }
    }
    if (cont > 0)
    {
        cout << "achei";
    }
    else
    {
        cout << "nao achei";
    }
}
