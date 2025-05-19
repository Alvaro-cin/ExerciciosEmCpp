#include <iostream>
using namespace std;
int main()
{
    float n2, n1 = 0;
    float som = 0, tot = 0;
    do
    {
        cin >> n2;
        if (n2 > 0)
        {
            tot++;
            som = som + n2;
        }
    } while (n2 > 0);
    cout << "O somatorio e " << som << " a media e: " << som / tot << " a quantidade de numeros lidos e: " << tot;
}