
#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Me Informe um Numero: ";
    cin >> a;
    if (a % 2 == 0)
    {
        cout << "O numero " << a << " e par!";
    }
    else
    {
        cout << "O numero " << a << " e impar!";
    }
}
