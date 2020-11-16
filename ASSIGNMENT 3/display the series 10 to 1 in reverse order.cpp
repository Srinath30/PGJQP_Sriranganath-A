#include <iostream>
using namespace std;
class Series
{
    int counter;
    public:
void PrintReverseOrder(int N)
{
   for(int counter=N;counter>0;counter--)
   {
     cout << counter << "\n";
   }


}
};




int main()
{
    int N = 10;
    Series s1;
    s1.PrintReverseOrder(N);


}








