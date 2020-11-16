#include <iostream>
using namespace std;
class Fibonacci
{
    int n, t1 = 0, t2 = 1, nextTerm = 0;
    public: void check_fibonacci()
{
     cout << "Enter the number of terms\n: ";
     cin >> n;
     cout << "Fibonacci Series\n: ";
     for (int i=1; i<=n;++i)
    {
        if(i == 1)
        {
            cout << " " << t1;
            continue;
        }
        if(i == 2)
        {
            cout << t2 << " ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        cout << nextTerm << " ";
    }

}

};
int main()
{
    Fibonacci f1;
    f1.check_fibonacci();
}
