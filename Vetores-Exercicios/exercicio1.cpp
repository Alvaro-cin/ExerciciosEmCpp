#include <iostream>
using namespace std;

int main()
{
    float vetor[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> vetor[i];
    }
    cout << "Os valores sao: ";
    for (int i = 0; i < 5; i++)
    {
        cout << vetor[i] << " ";
    }
}
