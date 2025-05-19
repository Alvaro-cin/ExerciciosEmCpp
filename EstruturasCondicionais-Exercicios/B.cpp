
#include <iostream>
using namespace std;

int main()
{
    int n, p;
    cout << "Me informe um numero: ";
    cin >> n;
    if (n < 0)
    {
        p = n * (-1);
    }
    else
    {
        p = n;
    }
    cout << "O numero sendo positivo e: " << p;
}
