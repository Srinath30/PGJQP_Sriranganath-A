#include<iostream>
using namespace std;
class Array_sum
  {
   int arr[20],i,n,sum=0;
   public: void check_sum()
   {
   cout<<"How many elements you want to enter: ";
   cin>>n;
   cout<<"Enter any "<<n<<" elements in Array: ";
   for(i=0;i<n;i++)
   {
   cin>>arr[i];
   }
   cout<<"Sum of all Elements are: ";
   for(i=0;i<n;i++)
   {
    sum=sum+arr[i];
   }
   for(i=0;i<n;i++)
   {
   }
  cout<<sum;
  }

   };
   int main()
   {
       Array_sum a1;
       a1.check_sum();
   }
