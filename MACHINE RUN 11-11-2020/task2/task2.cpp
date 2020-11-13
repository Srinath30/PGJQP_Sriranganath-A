#include<iostream>
using namespace std;
class Add
{
    int n1,n2;
public:
    void display(int n1, int n2)
    {

        cout<<"result is;"<<n1+n2;


    }};
    int main()
    {
        Add a1;
        a1.display(5,6);
    }
