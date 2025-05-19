
#include <iostream>
using namespace std;

int main()
{
    float a, b, d;
    cout << "Me Informe um Número: ";
    cin >> a;
    cout << "Me informe outro Número: ";
    cin >> b;
    if (a > b)
    {
        d = a - b;
    }
    else
    {
        d = b - a;
    }
    cout << "A diferença do maior para menor e: " << d;
}
