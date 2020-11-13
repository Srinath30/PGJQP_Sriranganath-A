#include<iostream>
using namespace std;
class Least_Ex
{
    int num1,num2,num3;
    public:

        void Check_Least()
        {
            if(num1<num2)
            {
                if(num1<num3)
            {
                cout<<"num1 is lesser";
            }
        else
            {
                cout<<"num3 is lesser";

            }
            }
            else{
                if(num2<num3)
                {
                    cout<<"num2 is lesser";
                }
                else
                {
                    cout<<"num3 is lesser";
                }
            }
        }
        void accept()
        {
            cout<<"Enter three numbers";
            cin>>num1>>num2>>num3;
        }
};





int main()
{
    Least_Ex l1;
    l1.accept();
    l1.Check_Least();
}


