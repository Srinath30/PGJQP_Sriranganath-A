#include<iostream>
using namespace std;
class Rectangle
{
    int l,b;
public:
    void display()
    {
        cout<<"Enter the length";
        cin>>l;
        cout<<"Enter the Breadth";
        cin>>b;
        cout<<"result of perimeter is;"<<2*l+2*b;
        cout<<"result of area is;"<<l*b;


    }};
    int main()
    {
        Rectangle r1;
        r1.display();
    }
