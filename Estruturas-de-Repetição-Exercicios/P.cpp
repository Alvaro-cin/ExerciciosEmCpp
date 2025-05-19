#include <iostream>
using namespace std;
int main()
{
    float s = 0, m;
    for (int cont = 50; cont <= 70; cont += 2)
    {
        s += cont;
    }
    cout << "A soma é: " << s << " e a média é: " << s / 11 << endl;
}