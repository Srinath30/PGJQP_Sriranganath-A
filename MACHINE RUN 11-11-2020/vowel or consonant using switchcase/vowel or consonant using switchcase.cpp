#include<iostream>
using namespace std;
class Vowel
{
      char ch;
      public:
          void check_vowel_consonant()
          {
      cout<<"Enter any character from  A to Z := ";
      cin>>ch;
      switch(ch)
      {
      case 'A':
           cout<<"Vowel";
           break;

      case 'E':
           cout<<"Vowel";
           break;

      case 'I':
           cout<<"Vowel";
           break;

      case 'O':
           cout<<"Vowel";
           break;

      case 'U':
           cout<<"Vowel";
           break;

      case 'a':
           cout<<"Vowel";
           break;

      case 'e':
           cout<<"Vowel";
           break;

      case 'i':
           cout<<"Vowel";
           break;

      case 'o':
           cout<<"Vowel";
           break;

      case 'u':
           cout<<"Vowel";
           break;

      default:
           cout<<"consonant";
          }

      }

};
int main()
{
    Vowel v1;
    v1.check_vowel_consonant();
}
