#include<iostream>
using namespace std;
class Add
{
    int n1,n2,result;
public:
    void display()
    {
        cout<<"Enter a first number";
        cin>>n1;
        cout<<"Enter a Second number";
        cin>>n2;

        result=n1+n2;
        if(result>100)
        {
            cout<<"The result is greater than 100";
        }
        else
        {
            cout<<"The result is not greater than 100";

        }


    }};
    int main()
    {
        Add a1;
        a1.display();
    }
