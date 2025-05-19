#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Me diga 3 numeros\n";
    cin >> a >> b >> c;
    if ((a + b + c) >= 100)
    {
        cout << (a + b + c);
    }
}