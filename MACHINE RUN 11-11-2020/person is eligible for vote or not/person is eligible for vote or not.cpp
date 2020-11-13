#include<iostream>
using namespace std;
class Vote
{
    int age;
    public:
        void Eligible_for_vote()
        {
            cout<<"Enter the age";
            cin>>age;
            if(age>=18)
            {
                cout<<"The person is eligible for vote";
            }
        else
            {
                cout<<"The person is not eligible for vote";

            }
        }
};

int main()
{
    Vote v1;
    v1.Eligible_for_vote();
}


