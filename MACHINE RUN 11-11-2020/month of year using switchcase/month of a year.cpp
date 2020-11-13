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
            case 1: cout<<"January";break;
            case 2: cout<<"February";break;
            case 3: cout<<"March";break;
            case 4: cout<<"April";break;
            case 5: cout<<"May";break;
            case 6: cout<<"June";break;
            case 7: cout<<"July";break;
            case 8: cout<<"august";break;
            case 9: cout<<"september";break;
            case 10:cout<<"october";break;
            case 11:cout<<"november";break;
            case 12:cout<<"december";break;
            default: cout<<"invalid choice";

        }
    }
};
int main()
{
    Switch_case obj1;
    obj1.display();
}





