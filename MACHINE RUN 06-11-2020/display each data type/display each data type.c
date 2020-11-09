#include<iostream>
using namespace std;
class Data_type
{
    int n1;
    char n2;
    float n3;
public:
    void display()
    {
        cout<<"Enter the Integer";
        cin>>n1;
        cout<<"Enter the Character";
        cin>>n2;
        cout<<"Enter the float";
        cin>>n3;
        cout<<n1<<n2<<n3;
    }};
    int main()
    {
        Data_type d1;
        d1.display();
    }


