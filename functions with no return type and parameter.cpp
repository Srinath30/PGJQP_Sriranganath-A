#include<iostream>
using namespace std;
class Func_test
{
    int num,b;

public:
        void inc(int b)


    {

        num=b+1;
        cout<<"result is;"<<num;



    }};
    int main()
    {
        Func_test f1;
        f1.inc(10);
    }

