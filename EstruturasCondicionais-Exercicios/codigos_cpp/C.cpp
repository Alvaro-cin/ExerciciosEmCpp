
#include <iostream>
using namespace std;

int main()
{
    float n1, n2, n3, n4, md;
    cout << "Nota 1: ";
    cin >> n1;
    cout << "Nota 2: ";
    cin >> n2;
    cout << "Nota 3: ";
    cin >> n3;
    cout << "Nota 4: ";
    cin >> n4;
    md = (n1 + n2 + n3 + n4) / 4;
    if (md >= 50)
    {
        cout << "Aprovado com media " << md;
    }
    else
    {
        cout << "Reprovado com media " << md;
    }
}
