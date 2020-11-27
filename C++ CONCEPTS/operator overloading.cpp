// Overload ++ when used as prefix
#include <iostream>
using namespace std;

class Count {
   private:
    int value;

   public:

    // Constructor to initialize count to 5
    Count() : value(5) {}

    // Overload ++ when used as prefix
    void operator ++ ()
    {
        ++value;
    }

    void display() {
        cout << "Count: " << value << endl;
    }
};

int main() {
    Count c1;

    // Call the "void operator ++ ()" function
    ++c1;

    c1.display();
    return 0;
}
