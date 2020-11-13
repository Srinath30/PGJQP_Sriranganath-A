#include<iostream>
using namespace std;
class Average
{
    int n1,n2,n3,n4,n5,avg;
public:
    void Display()
    {
        cout<<"Enter the First Number";
        cin>>n1;
        cout<<"Enter the Second Number";
        cin>>n2;
        cout<<"Enter the Third Number";
        cin>>n3;
        cout<<"Enter the Fourth Number";
        cin>>n4;
        cout<<"Enter the Fifth Number";
        cin>>n5;

        avg=(n1+n2+n3+n4+n5)/5;
        if(avg>10)
        {
            cout<<"\n is greater than 10";
        }
        else{

            cout<<"\n is not greater than 10";
        }

    }};
    int main()
    {
        Average a1;
        a1.Display();
    }



