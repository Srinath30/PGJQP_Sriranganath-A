#include <iostream>
using namespace std;

class Abstraction
{
    private:
        int a, b;

    public:

        // method to set values of
        // private members
        void set(int x, int y)
        {
            a = x;
            b = y;
        }

        void display()
        {
            cout<<"a = " <<a << endl;
            cout<<"b = " << b << endl;
        }
};

int main()
{
    Abstraction a1;
    a1.set(10, 20);
    a1.display();
    return 0;
}
