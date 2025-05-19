#include <iostream>
using namespace std;
int main()
{
    for (int c = 10; c <= 100; c += 10)
    {
        cout << c << "°C " << (c * 1.8) + 32 << "°F" << endl;
    }
}