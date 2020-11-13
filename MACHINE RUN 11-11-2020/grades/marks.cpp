#include<iostream>
using namespace std;
class Grades
{
    int mark;
    public:
        void Check_Marks()
        {
            cout<<"Enter the Mark";
            cin>>mark;
            mark>=90;
            mark>=80 , mark<90;
            mark>=60 , mark<80;
            mark>=45 , mark<60;
            mark<45;
            if(mark>=90)
            {
                cout<<"The grade is A";
            }
            else if(mark>=80&&mark<90)
            {
                cout<<"The grade is B";

            }
            else if(mark>=60&&mark<80)
            {
                 cout<<"The grade is C";

            }
            else if(mark>=45&&mark<60)
            {
                cout<<"the grade is D";
            }
            else if(mark<45)
            {
                cout<<"the grade is fail";

            }

            }
        };


int main()
{
    Grades g1;
    g1.Check_Marks();
};






