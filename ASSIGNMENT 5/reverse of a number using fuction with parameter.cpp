#include<iostream>
using namespace std;
class Reverse
{
    int rev=0,rem,num;
    public:int display_reverse(int num)
    {
        cout<<"Enter a number";
        cin>>num;
        while(num>0)
        {
            rem=num%10;
            rev=rev*10+rem;
            num=num/10;
        }
        cout<<"Reverse:"<<rev;
        return 0;
    }
};
int main()
{
    Reverse obj1;
    obj1.display_reverse(20);
}
