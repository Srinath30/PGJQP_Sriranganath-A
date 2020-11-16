#include <iostream>
using namespace std;
class Palindrome
{

   int n, num,rem, rev = 0;
   public:
       void display_palindrome()
       {
           cout << "Enter a positive number: ";
           cin >> num;
           n = num;
        do
     {
         rem = num % 10;
         rev = (rev * 10) +rem;
         num = num / 10;
     } while (num != 0);
      cout << " The reverse of the number is: " << rev << endl;
      if (n == rev)
          {
             cout << " The number is a palindrome.";
          }
         else
            {
               cout << " The number is not a palindrome.";
            }


       }



};
int main()
{
    Palindrome p1;
    p1.display_palindrome();
}



