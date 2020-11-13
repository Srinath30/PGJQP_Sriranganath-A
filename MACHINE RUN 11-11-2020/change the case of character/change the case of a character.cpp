#include <iostream>
using namespace std;
class Upper
{
    char ch,x;
    public:
        void Check_character()
        {
         cout<<"Enter a character in uppercase: ";
         cin>>ch;

         ch=ch+32;
         cout<<"Entered character in lowercase: "<<ch;

         if (isupper(x))
         {
             cout<<"The entered character is not lowercase";
         }
        else
         {
             cout<<" The entered character is lowercase";
         }
        }

};
int main()
{
     Upper u1;
     u1.Check_character();

}
















