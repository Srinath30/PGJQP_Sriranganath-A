#include <iostream>
using namespace std;
class Power
{
    int exponent;
    float base, result = 1;
public:
     Display_power(int exponent)
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
    return 0;

}
};
int main()
{
    Power p1;
    p1.Display_power(5);
}


