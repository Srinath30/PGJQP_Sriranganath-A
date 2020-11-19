#include<iostream>
using namespace std;
class Even_odd_pos_negative
{
    int num;
    public:
        int Check_even_odd(int num)
        {
            cout<<"Enter a number";
            cin>>num;
            if(num%2==0)
            {
                cout<<"Even:";
            }
        else
            {
                cout<<"odd:";

            }
            return 0;
        }
int Check_positive_negative(int num)
{

    if(num>0)
    {
        cout<<"\nThe number is positive:";
    }
    else
    {
        cout<<"The number is negative:";

    }
    return 0;
}
};
int main()
{
    Even_odd_pos_negative e1;
    e1.Check_even_odd(5);
    e1.Check_positive_negative(5);
}






