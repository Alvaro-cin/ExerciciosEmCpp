#include <iostream>
#include <string>
using namespace std;
int main()
{
    string nome, sexo;
    cout << "Qual o Seu Nome?: ";
    cin >> nome;
    cout << "Qual seu sexo M/F?: ";
    cin >> sexo;
    if (sexo != "F" && sexo != "M")
    {
        cout << "Sexo Informado Invalido";
    }
    else
    {
        if (sexo == "F")
            cout << "Ilma.Sra. " << nome << endl;
        else
        {
            cout << "Ilmo.Sr. " << nome << endl;
        }
    }
}