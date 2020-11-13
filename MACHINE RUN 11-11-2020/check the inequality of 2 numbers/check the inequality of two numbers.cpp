#include<iostream>
using namespace std;
class InEqual
{
    int num1,num2;
    public:
        void Check_InEqual()
        {
            cout<<"Enter two numbers";
            cin>>num1>>num2;
            if(num1!=num2)
            {
                cout<< "is not Equal";
            }
        else
            {
                cout<< "is Equal";

            }
        }
};

int main()
{
    InEqual e1;
    e1.Check_InEqual();
}


