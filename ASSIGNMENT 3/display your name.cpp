#include<iostream>
using namespace std;
class Display_Name
{
    int counter;
    public:
        void name()
        {
            for(counter=0;counter<5;counter++)
            {
                cout<<"Sriranganth\n";
            }
        }
};

int main()
{
    Display_Name d1;
    d1.name();
}







