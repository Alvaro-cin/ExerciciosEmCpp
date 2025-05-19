#include <iostream>
using namespace std;
int main()
{
    int cont = 0, n1;
    cout << "Quer a tabuada de qual numero? ";
    cin >> n1;
    do
    {
        cont++;
        cout << cont << " X " << n1 << " = " << (cont * n1) << endl;
    } while (cont < 10);
}