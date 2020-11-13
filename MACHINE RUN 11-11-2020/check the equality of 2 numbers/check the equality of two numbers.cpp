#include<iostream>
using namespace std;
class Equal
{
    int num1,num2;
    public:
        void Check_Equal()
        {
            cout<<"Enter two numbers";
            cin>>num1>>num2;
            if(num1==num2)
            {
                cout<< "is Equal";
            }
        else
            {
                cout<< "not Equal";

            }
        }
};

int main()
{
    Equal e1;
    e1.Check_Equal();
}

