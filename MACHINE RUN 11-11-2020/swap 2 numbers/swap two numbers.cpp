#include<iostream>
using namespace std;
class Swap_Ex
{
    int num1,num2,temp;
    public:
        void Swap()
        {
            cout<<"Enter two numbers";
            cin>>num1>>num2;
          cout<<"\n before swap num1="<<num1<<"\n num2="<<num2<<endl;
          temp=num1;
          num1=num2;
          num2=temp;
          cout<<"\n after swap num1="<<num1<<"\n num2="<<num2<<endl;

        }
};

int main()
{
    Swap_Ex s1;
    s1.Swap();
}




