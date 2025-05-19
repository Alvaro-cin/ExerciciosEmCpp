#include <iostream>
using namespace std;

int main()
{
    float vetor[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> vetor[i];
    }
    cout << "Os valores sao: ";
    for (int i = 9; i >= 0; i--)
    {
        cout << vetor[i] << " ";
    }
}
