#include <bits/stdc++.h>
using namespace std;

// Driver code
int main()
{
    int arr[] = { 10, -20, 30, -20, 50, -20, 70, -20 };

    int n = sizeof(arr) / sizeof(arr[0]);

    // variable containing the old and new values
    int old_val = -20, new_val =0;

    // print old array
    cout << "Original Array:";
    for (int i = 0; i < n; i++)
    cout << ' ' << arr[i];
    cout << '\n';

    // Function used to replace the values
    replace(arr, arr + n, old_val, new_val);

    // new array after using std::replace
    cout << "New Array:";
    for (int i = 0; i < n; i++)
    cout << ' ' << arr[i];
    cout << '\n';

    return 0;
}

