#include <iostream>
using namespace std;
class Vowel
{
    char c;
    int isLowercaseVowel, isUppercaseVowel;
    public: void check_vowel_consonant()
    {
        cout << "Enter an alphabet: ";
        cin >> c;
     isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
     isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
     if (isLowercaseVowel || isUppercaseVowel)
     {
         cout << c << " is a vowel.";
     }
    else
    {
      cout << c << " is a consonant.";
    }




    }




};
int main()
{
    Vowel v1;
    v1.check_vowel_consonant();
}
