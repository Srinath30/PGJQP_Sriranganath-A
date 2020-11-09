#include<iostream>
using namespace std;
class Average
{
    int n1,n2,n3,n4,n5,average;
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
        cout<<"The avg is"<<(n1+n2+n3+n4+n5)/5;

    }};
    int main()
    {
        Average a1;
        a1.Display();
    }


