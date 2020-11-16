#include <iostream>
using namespace std;
class Table
{
    int counter,num;
public:
    void display()
    {
        cout<<"Enter any Number";
        cin>>num;

      for(counter=1; counter<=10;counter++)
      {
        cout<<"\n"<<num<<"*"<<counter<<"="<<num*counter;
      }



   }

};
int main()
{
    Table t1;
    t1.display();
}

