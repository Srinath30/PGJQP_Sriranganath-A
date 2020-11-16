#include <iostream>
using namespace std;
class Number
{
    int counter;
public:
    void display()
    {
      for(counter=2; counter<=20;counter++)

        {

      if(counter % 2 == 0)
        {

         cout <<counter<<"\n";
        }




      }
   }

};
int main()
{
    Number n1;
    n1.display();
}


