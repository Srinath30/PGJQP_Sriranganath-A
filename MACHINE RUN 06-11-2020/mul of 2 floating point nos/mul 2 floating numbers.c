
#include<iostream>
using namespace std;
class Multiply
{
    float n1,n2;
public:
    void display()
    {
        cout<<"Enter a first number";
        cin>>n1;
        cout<<"Enter a Second number";
        cin>>n2;
        cout<<"result is;"<<n1*n2;


    }};
    int main()
    {
        Multiply m1;
        m1.display();
    }
