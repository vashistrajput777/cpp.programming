#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch; // Takes a single character as input

    // Using C-style cast
    cout << "ASCII value of " << ch << " is: " << (int)ch << endl;

    // Using static_cast (modern C++ style)
    cout << "ASCII value of " << ch << " is (static_cast): " << static_cast<int>(ch) << endl;

    return 0;
}
