#include<iostream>
using namespace std;
class Divide
{
    int num1,num2;
public:
    void display()
    {
        cout<<"Enter the first number";
        cin>>num1;
        cout<<"Enter the second number";
        cin>>num2;
        cout<<"result of quotient is;"<<num1/num2;
        cout<<"result of remainder is;"<<num1%num2;


    }};
    int main()
    {
        Divide d1;
        d1.display();
    }

