#include <iostream>
using namespace std;

int main() {
    int soma = 0;

    for (int num = 2; num <= 50; num++) {
        bool Primo = true;

    
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                Primo = false;
                break;
            }
        }

        if (Primo) {
            soma += num;
        }
    }

    cout << "A soma dos numeros primos entre 1 e 50 e: " << soma << endl;

    
}