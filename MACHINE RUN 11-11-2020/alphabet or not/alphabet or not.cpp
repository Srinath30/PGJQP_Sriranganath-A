#include <iostream>
using namespace std;
class Alphabet
{
    char ch;
    public: void check_alphabet()
    {
        cout<<"Enter a character as you wish\n";
        cin>>ch;
        if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
            {
              cout<<ch<<" is an Alphabet: ";

            }
        else
           {
              cout<<ch<<" is not an Alphabet: ";
           }

}

    };
    int main()
    {
        Alphabet a1;
        a1.check_alphabet();
    }



