#include<iostream>
using namespace std;
class Print_Integer
{
    int integer;
    public:
    void display()
    {
        cout<<"enter an integer";
        cin>>integer;
        cout<<"The result is<<integer";
    }};
    int main()
    {
        Print_Integer p1;
        p1.display();
    }


