#include <iostream>
using namespace std;
int main()
{
   string cont, comodo;
   float a, l, tot = 0, tot2 = 0;
   do
   {
      cout << "Me diga o comodo: ";
      cin >> comodo;
      cout << "Me informe a largura do " << comodo << " ";
      cin >> a;
      cout << "Me informe o comprimento do " << comodo << " ";
      cin >> l;
      tot = a * l;
      tot2 = tot2 + tot;
      cout << "Quer continuar? ";
      cin >> cont;
   } while (cont != "NÃO");
   cout << "A area total e: " << tot2;
}