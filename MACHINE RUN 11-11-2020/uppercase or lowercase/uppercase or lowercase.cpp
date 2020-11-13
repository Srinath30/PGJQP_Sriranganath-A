#include<iostream>
using namespace std;
class Upper_Lower
{
    char ch;
    public:
        void check_upper_lower()
        {
            cout<<"Enter any character: ";
	        cin>>ch;
	        ch>=65,ch<=90;
	        ch>=97,ch<=122;
	        if(ch>=65,ch<=90)
            {
             cout<<endl<<"You entered an uppercase character";
            }
            else if(ch>=97,ch<=122)
            {
            cout<<endl<<"You entered a lowercase character";
            }
        }
};
int main()
{
     Upper_Lower u1;
     u1.check_upper_lower();
}





