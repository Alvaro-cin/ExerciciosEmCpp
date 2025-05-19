#include <iostream>
using namespace std;

int main()
{
    float n = 10, nt = 0, ac = 0, j = 1;

    for (j; j <= n; j++)
    {
        cout << "Me fale a Nota " << j << " ";
        cin >> nt;
        ac = ac + nt;
    }

    cout << "A media das notas e: " << ac / n << endl;
    cout << "A soma das notas e: " << ac;
}