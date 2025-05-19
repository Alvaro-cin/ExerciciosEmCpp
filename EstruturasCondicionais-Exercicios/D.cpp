#include <iostream>
using namespace std;

int main()
{
    float n1, n2, n3, n4, ne, md1, md2;
    cout << "Nota 1: ";
    cin >> n1;
    cout << "Nota 2: ";
    cin >> n2;
    cout << "Nota 3: ";
    cin >> n3;
    cout << "Nota 4: ";
    cin >> n4;
    md1 = (n1 + n2 + n3 + n4) / 4;
    if (md1 >= 70)
    {
        cout << "Aprovado com media " << md1;
    }
    else
    {
        cout << "Me informe sua nota da recuperacao ";
        cin >> ne;
        md2 = (md1 + ne) / 2;
        if (md2 >= 50)
        {
            cout << "Aprovado em exame com media " << md2;
        }
        else
        {
            cout << "Reprovado em exame com media " << md2;
        }
    }
}
