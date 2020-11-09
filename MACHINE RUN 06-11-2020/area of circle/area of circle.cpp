#include<iostream>
#define PI 3.14
using namespace std;

class Area
{
    int r;

public:
    void display()
    {
        cout<<"Enter the Radius";
        cin>>r;

        cout<<"result is"<<PI*r*r;


    }};
    int main()
    {
        Area a1;
        a1.display();
    }
