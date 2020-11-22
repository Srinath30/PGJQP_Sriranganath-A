#include<iostream>
using namespace std;
class Counter
{

public: void counter()
{
     static int count=0;
    cout << count++;
   for(int i=0;i<5;i++)
    {
        counter();
    }

}

};
int main()
{
    Counter c1;
    c1.counter();
}
