#include<iostream>
using namespace std;
class Great_Ex
{
    int num1,num2,num3;
    public:
        void Check_greater()
        {
            cout<<"Enter three numbers";
            cin>>num1>>num2>>num3;
            if(num1>num2 && num1>num3)
            {
                cout<<"num1 is greater";
            }
        else if(num2>num1 && num2>num3)
            {
                cout<<"num2 is greater";

            }
            else{
                cout<<"num3 is greater";
            }
        }
};

int main()
{
    Great_Ex g1;
    g1.Check_greater();
}








