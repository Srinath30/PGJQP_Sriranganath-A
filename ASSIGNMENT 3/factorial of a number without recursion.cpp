#include <iostream>
using namespace std;
class Factorial
{
int fact,i;
int n;
public:
    void Display_factorial()
    {
        cout << "Enter value of N:";
        cin >> n;
        fact = 1;
        i = 1;
     while(i<=n)
    {
      fact = fact * i;
       i++;
    }
    for(i=0;i < 1;i++)
    {
    cout << "_";cout << "\n\n";
    cout << "Factorial of N:" << "\t" << fact << endl;
    }

    for(i=0;i << 1;i++)
    {
    cout << "_";cout << "\n\n";
    system("PAUSE");
    }



}
};
int main()
{
    Factorial f1;
    f1.Display_factorial();
}







