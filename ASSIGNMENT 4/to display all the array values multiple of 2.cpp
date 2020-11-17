#include<iostream>
using namespace std;
class Array_Ex
{


    int array[10];
    public:void accept()
    {
        cout<<"enter the values in array";
        for(int index=0;index<5;index++)
        {
            cin>>array[index];
        }
    }

void display()
{
    cout<<"the values in array are\n";
    for(int index=0;index<5;index++)
    {
        cout<<array[index]*2<<endl;
    }
}
};
int main()
{
    Array_Ex obj1;
    obj1.accept();
    obj1.display();
}

