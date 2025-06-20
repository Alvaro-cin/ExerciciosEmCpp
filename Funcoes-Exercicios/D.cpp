#include <iostream>
using namespace std;
void maior(int a, int b, int c)
{
    if (a > b && a > c)
    {
        cout << "O maoir numero e: " << a << endl;
    }
    else
    {
        if (b > a && b > c)
        {
            cout << "O maoir numero e: " << b << endl;
        }
        else
        {
            cout << "O maoir numero e: " << c << endl;
        }
    }
}
void menor(int a, int b, int c)
{
    if (a < b && a < c)
    {
        cout << "O menor numero e: " << a << endl;
    }
    else
    {
        if (b < a && b < c)
        {
            cout << "O menor numero e: " << b << endl;
        }
        else
        {
            cout << "O menor numero e: " << c << endl;
        }
    }
}
int main()
{
    cout << "Digite o valor de A: ";
    int n1;
    cin >> n1;
    cout << "Digite o valor de B: ";
    int n2;
    cin >> n2;
    cout << "Digite o valor de C: ";
    int n3;
    cin >> n3;

    maior(n1, n2, n3);
    menor(n1, n2, n3);

    return 0;
}