#include<iostream>
using namespace std;
class Mul
{
  int first[20], second[20], multiply[20], c, n;
  public: void mul()
  {
    cout << "Enter the number of elements in the array ";
    cin >> n;
    cout << "Enter elements of first array" << endl;
    for (c = 0; c < n; c++)
    cin >> first[c];
    cout << "Enter elements of second array" << endl;
    for (c = 0; c < n; c++)
    cin >> second[c];
    cout << "Multiplication of elements in the arrays:" << endl;
    for (c = 0; c < n; c++)
        {
    multiply[c] = first[c] * second[c];
    cout << multiply[c] << endl;
        }
}

  };
  int main()
  {
      Mul m1;
      m1.mul();
  }
