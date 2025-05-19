#include <iostream>
using namespace std;
int main()
{

int A, B, C, D, E;
int maior, menor;
cout << "Digite 5 valores inteiros \n";
cin >> A >> B >> C >> D >> E;
maior = menor = A;
if (B > maior) maior = B;
if (C > maior) maior = C;
if (D > maior) maior = D;
if (E > maior) maior = E;
    
if (B < menor) menor = B;
if (C < menor) menor = C;
if (D < menor) menor = D;
if (E < menor) menor = E;
cout << "Maior valor: " << maior ;
cout << " Menor valor: " << menor ;
    
        



}