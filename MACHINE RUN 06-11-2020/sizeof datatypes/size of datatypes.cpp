#include<iostream>
using namespace std;
class Data_type
{
    int a;
    char ch;
    float f;
    double d;
public:
    void display()
    {
  cout << "Size of integer data type : " <<sizeof(int)<<endl;
  cout << "Size of float data type : " <<sizeof(float)<<endl;
  cout << "Size of double data type : " <<sizeof(double)<<endl;
  cout << "Size of char data type : " <<sizeof(char)<< endl;

    }};
    int main()
    {
        Data_type d1;
        d1.display();
    }

