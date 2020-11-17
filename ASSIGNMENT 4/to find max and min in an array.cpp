#include<iostream>
using namespace std;
class Array_Ex
{
    int arr[10], n, i, max, min;
    public: void array_max_min()
    {
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements of the array : ";
    for (i = 0; i < n; i++)
    cin >> arr[i];
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    cout << "\nLargest element : " << max;
    cout << "\nSmallest element: " << min;
}
    };
    int main()
    {
        Array_Ex a1;
        a1.array_max_min();
    }

