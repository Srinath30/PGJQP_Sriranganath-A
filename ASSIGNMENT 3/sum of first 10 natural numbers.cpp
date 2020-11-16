#include <iostream>
using namespace std;
class Number
{
    int counter,sum=0;
public:
    void display()
    {
        cout<<"Enter the first 10 natural numbers\n";

      for(counter=1; counter<=10;counter++)
      {
        cout<<counter<<" ";
        sum=sum+counter;
      }
      cout<<"\nThe sum of first 10 natural numbers are:\n"<<sum;



   }

};
int main()
{
    Number n1;
    n1.display();
}


