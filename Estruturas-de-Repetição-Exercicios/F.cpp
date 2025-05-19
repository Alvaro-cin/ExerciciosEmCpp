#include <iostream>
using namespace std;
int main()
{
  cout << "valores numéricos divisíveis por 4 e menores que 200: ";
  for (int a = 1; a <= 200; a++)
  {
    if (a % 4 == 0)
    {
      cout << a << endl;
    }
  }
}