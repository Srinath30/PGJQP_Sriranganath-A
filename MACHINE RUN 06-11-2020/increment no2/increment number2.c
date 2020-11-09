#include<iostream>
using namespace std;
class Increment_number
{
    int n;
public:
    void display()
    {
        cout<<"Enter a number";
        cin>>n;
        cout<<"result is;"<<n+7;


    }};
    int main()
    {
        Increment_number i1;
        i1.display();
    }

