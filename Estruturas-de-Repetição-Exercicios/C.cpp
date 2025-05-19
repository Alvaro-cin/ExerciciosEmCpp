#include <iostream>
using namespace std;
int main()
{
  int m = 0;

  for (int cont = 0; cont <= 100; cont++)
  {
    m += cont;
  }
  cout << " soma dos cem primeiros números naturais: " << m << " ";
}