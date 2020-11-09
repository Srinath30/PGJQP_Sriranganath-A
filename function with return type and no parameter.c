#include<iostream>
using namespace std;
class Func_test
{
    int num,b;
public:
    int inc()

    {
        int b=num+1;
        cout<<"Enter a number";
        cin>>num;
        cout<<"result is;"<<num+1;
        return b;


    }};
    int main()
    {
        Func_test f1;
        f1.inc();
    }
