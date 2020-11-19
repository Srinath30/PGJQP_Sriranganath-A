#include<iostream>
using namespace std;
int main()
{
int num1,num2,*p,*q,sum;
cout<<"Enter two Numbers:\n";
cin>>num1>>num2;
p= &num1;
q=&num2;
sum= *p + *q;
cout<<"Sum of 2 numbers="<< sum;
return 0;
}
