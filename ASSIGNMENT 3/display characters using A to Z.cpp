#include <iostream>
using namespace std;
class Alphabet
{
     char counter;
 public:
    void display()
    {
     cout << "Alphabets from A - Z are : " << endl;
     for(counter = 'A'; counter <= 'Z'; counter++)
     {
         cout << counter << "\n";
     }

    }
};
int main()
{
    Alphabet a1;
    a1.display();
}















