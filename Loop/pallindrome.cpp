#include <iostream>

using namespace std;

int main() {
    int num, originalNum, reversedNum = 0, remainder;
    cout << "Enter a positive integer: ";
    cin >> num;
    originalNum = num;
    while (num > 0) {
        remainder = num % 10;      
        reversedNum = reversedNum * 10 + remainder; 
        num /= 10;                
    }
    if (originalNum == reversedNum) {
        cout << originalNum << " is a Palindrome number." << endl;
    } else {
        cout << originalNum << " is not a Palindrome number." << endl;
    }

    return 0;
}
