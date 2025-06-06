#include <iostream>
using namespace std;
int main()
{
    float p = 0, im = 0;
    int a[10][7];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            cout << "Digite um numero para o indice na linha " << i << " e coluna " << j << ": ";
            cin >> a[i][j];
            if (a[i][j] % 2 == 0)
            {
                p++;
            }else
            {
                im++;
            }
        }
    }
    cout << "O total de números pares é: " << p << " e o total de numeros impares e: " << im << endl;
    cout << "O percentual de números pares e: " << (p/9)*100 << "%" << endl << " O percentual de números impares e: " << (im/9)*100  << "%";
}