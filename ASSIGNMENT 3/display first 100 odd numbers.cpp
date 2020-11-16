#include <iostream>
using namespace std;
class Number
{
    int counter;
public:
    void display()
    {
      for(counter=1; counter<=100;counter++)

        {

      if(counter % 2 == 1)
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



