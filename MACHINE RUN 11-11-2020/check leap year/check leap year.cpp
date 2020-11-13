#include<iostream>
using namespace std;
class Leapyear_Ex
{
    int year;
    public:
        void Leap_year()
    {
            cout<<"enter the year:";
            cin>>year;
            if(year%4==0)
            {
                cout<<year<<" is a leap year";
            }
                else
                {
                    cout<<year<<" is not a leap year";
                }
            }
    };
    int main()
    {
        Leapyear_Ex l1;
        l1.Leap_year();
    }




