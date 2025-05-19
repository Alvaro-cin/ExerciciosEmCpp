#include <iostream>
using namespace std;
int main()
{
  unsigned long long a = 1, b = 0;
  for (int c = 1; c <= 64; c++)
  {
    b = b + a;
    a = a * 2;
  }
  cout << "Total de grãos no tabuleiro: " << b;
}