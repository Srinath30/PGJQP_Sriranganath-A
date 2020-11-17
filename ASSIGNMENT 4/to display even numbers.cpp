#include <iostream>
using namespace std;
class Array_even
{
    int n;
    public: void check_even()
    {
       cout<<"enter a number";
       cin>>n;
       int arr[n];
       for (int i = 0; i < n; i++)
    {
    cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2==0)
            {
            cout<<"\nThe even number is:"<<arr[i];
            }
    }

}


    };
    int main()
    {
        Array_even a1;
        a1.check_even();
    }
