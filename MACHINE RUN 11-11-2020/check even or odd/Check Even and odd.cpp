#include<iostream>
using namespace std;
class Even_odd
{
    int num;
    public:
        void Check_even_odd()
        {
            cout<<"Enter a number";
            cin>>num;
            if(num%2==0)
            {
                cout<<"Even";
            }
        else
            {
                cout<<"odd";

            }
        }
};

int main()
{
    Even_odd e1;
    e1.Check_even_odd();
}






