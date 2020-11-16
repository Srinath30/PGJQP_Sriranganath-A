#include <iostream>
using namespace std;
class Prime
{
    int low, high, i;
    bool isPrime = true;
    public: void check_prime()
    {
       cout << "Enter two numbers (intervals): ";
       cin >> low >> high;
       cout << "\nPrime numbers between " << low << " and " << high << " are: " << endl;
       while (low < high)
        {
        isPrime = true;
        if (low == 0 || low == 1)
        {
            isPrime = false;
        }
        else
        {
            for (i = 2; i <= low / 2; ++i)
            {
                if (low % i == 0)
                {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime)
            cout << low << " ";

        ++low;
    }




    }

       };
       int main()
       {
           Prime p1;
           p1.check_prime();
       }
