#include <iostream>
using namespace std;
class Number
 {
    int num, temp;
    int count = 0;
    public: void Check_number()
    {
    cout << "Enter any number : ";
    cin >> num;
    temp = num;
    while(temp != 0)
        {
            count++;
            temp /= 10;
        }

    cout << endl << "Total digits in " << num << " : "  << count;


}
};
int main()
{
    Number n1;
    n1.Check_number();
}



