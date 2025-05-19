#include <iostream>
using namespace std;
int main()
{
    float som = 0, n1;
    for (int a = 1; a <= 10; a++)
    {
        cout << "Digite o " << a << " Numero: ";
        cin >> n1;
        som += n1;
    }
    cout << "O somatorio e: " << som << " e a media e: " << som / 10 << endl;
}