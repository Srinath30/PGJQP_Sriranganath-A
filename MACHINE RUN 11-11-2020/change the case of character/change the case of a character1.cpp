#include <iostream>
using namespace std;
class Lower
{
    char ch,x;
    public:
        void Check_character()
        {
         cout<<"Enter a character in lowercase: ";
         cin>>ch;

         ch=ch-32;
         cout<<"Entered character in uppercase: "<<ch;

         if (isupper(x))
         {
             cout<<"The entered character is not uppercase";
         }
        else
         {
             cout<<" The entered character is uppercase";
         }
        }

};
int main()
{
     Lower l1;
     l1.Check_character();

}

