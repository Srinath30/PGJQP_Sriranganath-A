#include<iostream>
using namespace std;
class Multiply
{
    int n1,n2,n3;
public:
    void display()
    {
        cout<<"Enter a first number";
        cin>>n1;
        cout<<"Enter a Second number";
        cin>>n2;
        cout<<"Enter a third number";
        cin>>n3;
        cout<<"result is;"<<n1*n2*n3;


    }};
    int main()
    {
        Multiply m1;
        m1.display();
    }
