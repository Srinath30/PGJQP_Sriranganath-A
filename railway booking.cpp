#include<iostream>
using namespace std;
class Ticket
{

    char d1;



    public:
    void booking()
    {
        cout<<"Enter Passenger details";
        cin>>d1;
        cout<<"\nPassenger name:Srinath\nTicket.no:154875\nphone.no:123456789";


    }
    void status()
    {
        cout<<"\n\nStatus:";
        cout<<"The Ticket is confirmed\n";


    }
    void print()
    {
        cout<<"\n\nPrint the Details of passenger:";
        cout<<"\nName:Srinath\nTicket number:154875\nAge:22\nDate:09-11-2020\n";
    }
};
    int main()
    {
        Ticket t1;
        t1.booking();
        Ticket t2;
        t2.status();
        Ticket t3;
        t3.print();


    }







