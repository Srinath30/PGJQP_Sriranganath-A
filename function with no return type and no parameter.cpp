#include<iostream>
using namespace std;
class Func_test
{
    int num;
public:
    void inc()
    {
        cout<<"Enter a number";
        cin>>num;
        cout<<"result is;"<<num+1;


    }};
    int main()
    {
        Func_test f1;
        f1.inc();
    }
