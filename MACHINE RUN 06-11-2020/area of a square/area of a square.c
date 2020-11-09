#include<iostream>
using namespace std;
class Square
{
    int a;
public:
    void display()
    {
        cout<<"Enter a first number";
        cin>>a;
        cout<<"result is;"<<a*a;


    }};
    int main()
    {
        Square s1;
        s1.display();
    }

