#include<iostream>
using namespace std;
class Func_test
{
    int num,b;

public:
        int inc(int b)


    {

        num=b+1;


        cout<<"result is;"<<num;
        return b;



    }};
    int main()
    {
        Func_test f1;
        f1.inc(10);
    }
