#include<iostream>
using namespace std;
class Func_test
{
    int num,b;
public:
    int inc()

    {

        cout<<"Enter a number";
        cin>>num;

        return num+1;


    }};
    int main()
    {
        Func_test f1;

        cout<<f1.inc();
    }
