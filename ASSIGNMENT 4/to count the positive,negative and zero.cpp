#include <iostream>
using namespace std;
class Positive
{
    int input[100], count, i, nCount=0, pCount=0, zCount=0;
    public: void check_positive()
    {
      cout << "Enter Number of Elements in Array\n";
      cin >> count;
      cout << "Enter " << count << " numbers \n";
    // Read elements
    for(i = 0; i < count; i++)
        {
        cin >> input[i];
        }
     // Iterate form index 0 to elementCount-1 and
     // check for positive negative and zero
    for(i = 0; i < count; i++)
        {
        if(input[i] < 0)
        {
            nCount++;
        }
    else if(input[i] > 0)
        {
            pCount++;
        }
 else
    {
     zCount++;
    }
    }

    cout << "Negative Numbers : " << nCount << endl;
    cout << "Positive Numbers : " << pCount << endl;
    cout << "Zeroes : " << zCount << endl;

}
    };
    int main()
    {
        Positive p1;
        p1.check_positive();
    }

