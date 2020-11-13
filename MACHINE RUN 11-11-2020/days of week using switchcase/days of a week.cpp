#include<iostream>
using namespace std;
class Switch_case
{
    int choice;
    public: void display()
    {
        cout<<"Enter your choice";
        cin>>choice;
        switch(choice)
        {
            case 1: cout<<"sunday";break;
            case 2: cout<<"monday";break;
            case 3: cout<<"tuesday";break;
            case 4: cout<<"wednesday";break;
            case 5: cout<<"thursday";break;
            case 6: cout<<"friday";break;
            case 7: cout<<"saturday";break;
        default: cout<<"invalid choice";

        }
    }
};
int main()
{
    Switch_case obj1;
    obj1.display();
}




