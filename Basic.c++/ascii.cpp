#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;
    cout << "ASCII value of " << ch << " is: " << (int)ch << endl;
    cout << "ASCII value of " << ch << " is (static_cast): " << static_cast<int>(ch) << endl;

    return 0;
}
