#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Me diga um numero ";
    cin >> a;
    if (a >= 1 && a <= 9)
    {
        cout << "O valor está na faixa permitida";
    }
    else
    {

        cout << "O valor está fora da faixa permitida";
    }
}