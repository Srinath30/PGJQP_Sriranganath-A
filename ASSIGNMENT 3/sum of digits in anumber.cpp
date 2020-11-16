#include<iostream>
using namespace std;
class Sum_digits
{
int num,sum=0,rem;
public: void check_digits()
{
cout<<"Enter a number: ";
cin>>num;
while(num>0)
{
rem=num%10;
sum=sum+rem;
num=num/10;
}
cout<<"Sum is "<<sum<<endl;

}
};

int main()
{
    Sum_digits s1;
    s1.check_digits();
}
