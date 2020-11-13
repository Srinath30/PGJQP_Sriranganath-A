#include<iostream>
using namespace std;
class Add_mul
{
    int n1,n2,result1,result2;
public:
    void display()
    {
        cout<<"Enter a first number";
        cin>>n1;
        cout<<"Enter a Second number";
        cin>>n2;
        result1=n1+n2;
        result2=n1*n2;
        if(result1>result2)
        {
            cout<<"The Addition is greater";
        }
        else
            {
                cout<<"The multiplication is greater";

            }


    }};
    int main()
    {
        Add_mul a1;
        a1.display();
    }
