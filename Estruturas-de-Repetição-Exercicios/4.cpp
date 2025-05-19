#include <iostream>
using namespace std;

int main()
{
    int n = 100, ac = 0;

    for (int j = 1; j <= n; j++)
    {
        if (j % 2 != 0)
        {
            ac += j;
        }
    }

    cout << "A soma dos numeros impares é: " << ac;
}