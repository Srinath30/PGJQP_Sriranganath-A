#include<iostream>
using namespace std;
class Number
{
    int num;
    public:
        void Check_divisible()
        {
            cout<<"Enter a number";
            cin>>num;
            if(num%9==0)
            {
                cout<<"The number is divisible by 9";
            }
        else
            {
                cout<<"The number is not divisible by 9 ";

            }
        }
};

int main()
{
    Number n1;
    n1.Check_divisible();
}


