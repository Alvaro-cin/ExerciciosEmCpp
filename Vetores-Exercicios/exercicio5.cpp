#include <iostream>
using namespace std;

int main()
{
    float nota[4], cont, cont2 = 0;
    float med, medias[10];
    for (int i = 0; i < 10; i++)
    {
        cont = 0;
        for (int a = 0; a < 4; a++)
        {
            cout << "Aluno " << i + 1 << " digite sua " << a + 1 << " nota: ";
            cin >> nota[a];
            cont += nota[a];
        }
        med = cont / 4;
        medias[i] = med;
        cout << med << endl;
        if (med >= 70)
        {
            cont2++;
        }
    }
    cout << cont2;
}
