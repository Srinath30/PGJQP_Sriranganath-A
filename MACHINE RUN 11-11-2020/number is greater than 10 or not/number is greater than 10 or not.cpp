#include<iostream>
using namespace std;
class Greater
{
    int num;
    public:
        void Greater_than()
        {
            cout<<"Enter the number";
            cin>>num;
            if(num>10)
            {
                cout<<"The number is greater than 10";
            }
        else
            {
                cout<<"The number is not greater than 10";

            }
        }
};

int main()
{
    Greater g1;
    g1.Greater_than();
}



