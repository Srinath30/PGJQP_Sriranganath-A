#include <iostream>
using namespace std;
class Array_max_min
{
    // Get the array
    int arr[] = { 1, 45, 54, 71, 76, 12 };

    // Compute the sizes
    int n = sizeof(arr) / sizeof(arr[0]);
    public: void check_max_min()
    {
        // Print the array
    cout << "Array: ";
    {
         for (int i = 0; i < n; i++)
         {
             cout << arr[i] << " ";
         }


    // Find the minimum element
    cout << "\nMin Element = "
         << *min_element(arr, arr + n);

    // Find the maximum element
    cout << "\nMax Element = "
         << *max_element(arr, arr + n);
    }

}

    };
    int main()
    {
        Array_max_min a1;
        a1.check_max_min();
    }

