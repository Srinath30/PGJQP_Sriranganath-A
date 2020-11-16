#include <iostream>
using namespace std;
class Power
{
    int exponent;
    float base, result = 1;
public:
    void Display_power()
    {
    cout << "Enter base and exponent respectively:  ";
    cin >> base >> exponent;
    cout << base << "^" << exponent << " = ";
    while (exponent != 0)
        {
        result *= base;
        --exponent;
        }

    cout << result;

}




};
int main()
{
    Power p1;
    p1.Display_power();
}


