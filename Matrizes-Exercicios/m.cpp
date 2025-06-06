#include <iostream>
using namespace std;
int main()
{
    float a[5][5] ,cont = 0 ;
    
    for (int i = 0; i < 5; i++)
    {
        
        for (int j = 0; j < 5; j++)
        {
            cout << "Digite o número para posição [" << i << "][" << j << "]: ";
            cin >> a[i][j];
            if ( i == j)
            {
               
                    cont += a[i][j];
                
            }
        }
    }
    if (cont == 0)
    {
        cout << "Não tem numeros impares na diagonal principal!";
    }
    else
    {
        cout << "O somatorio dos numero impares na diagonal principal e: " << cont ;
    }
}