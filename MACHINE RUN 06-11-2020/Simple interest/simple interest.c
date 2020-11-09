#include<iostream>
using namespace std;
class Simple_interest
{
    int P,r,t;
public:
    void display()
    {

        cout<<"Enter the Principal amount";
        cin>>P;
        cout<<"Enter the Interest rate";
        cin>>r;
        cout<<"Enter the Time";
        cin>>t;
        cout<<"Final amount is;"<<P+P*r*t;



    }};
    int main()
    {
        Simple_interest s1;
        s1.display();
    }
