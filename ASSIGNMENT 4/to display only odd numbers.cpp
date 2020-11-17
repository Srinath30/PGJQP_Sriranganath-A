#include <iostream>
using namespace std;
class Array_odd
{
    int n;
    public: void check_odd()
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
        if(arr[i]%2!=0)
            {
            cout<<"\nThe odd number is:"<<arr[i];
            }
    }

}


    };
    int main()
    {
        Array_odd a1;
        a1.check_odd();
    }

