#include<iostream>
using namespace std;
class Employee
{
    int eid;
    float sal;
    char name[20];



    public:
    void Accept()
    {
        cout<<"Enter  Employees Id,name,salary\n"<<endl;
        cin>>eid>>name>>sal;


    }
    void Display()
    {
      cout<<"\nEmployee Number:,"<<eid;
      cout<<"\nEmployee Name	:,"<<name;
      cout<<"\n Salary:,"<<sal;
      cout<<"\n--------------------------\n";
      cout<<endl;
    }

};
    int main()
    {
        Employee e1,e2;
        e1.Accept();
        e1.Display();
        e2.Accept();
        e2.Display();
    }
