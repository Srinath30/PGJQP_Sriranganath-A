#include<iostream>
using namespace std;
class Number
{
    int counter;
    public:
        void Display()
        {
            for(counter=1;counter<=10;counter++)
            cout<<"\n"<<counter;
        }
};
int main()
{
    Number n1;
    n1.Display();
}




