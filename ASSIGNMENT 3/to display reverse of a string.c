#include <iostream>
#include <string.h>
using namespace std;
class Reverse

{
    char str[100];
    int i,len,temp;
    public: void Reverse_string()
    {
    cout<<"Enter a String as you wish\n";
    cin>>str;
    len=strlen(str);
    for(i=0; i<len/2; i++)
        {
        temp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
        }
   cout<<"Given String is reversed here\n"<<str;
}

    };
    int main()
    {
        Reverse r1;
        r1.Reverse_string();
    }

