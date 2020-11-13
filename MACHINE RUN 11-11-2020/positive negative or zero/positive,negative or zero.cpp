#include<iostream>
using namespace std;
class Positive
{
    int num;
    public:
        void Check_positive()
        {
            cout<<"Enter a number";
            cin>>num;
            if(num>0)
            {
                cout<<"number is positive";
            }
        else if(num<0)
            {
                cout<<"number is negative";

            }
            else{
                cout<<"number is zero ";
            }
        }
};

int main()
{
    Positive p1;
    p1.Check_positive();
}









