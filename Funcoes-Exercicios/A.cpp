#include <iostream>
#include <cmath> // biblioteca para sqrt() e pow()
using namespace std;

int main()
{
    double cateto1, cateto2, hipotenusa;

    cout << "Digite o valor do primeiro cateto: ";
    cin >> cateto1;

    cout << "Digite o valor do segundo cateto: ";
    cin >> cateto2;

    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    cout << "A hipotenusa do triângulo é: " << hipotenusa << endl;

    return 0;
}
