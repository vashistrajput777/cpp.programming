#include<iostream>
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false; // 0 and 1 are not prime
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int reverseNumber(int n) {
    int reversed = 0;
    while (n > 0) {
        int lastDigit = n % 10;
        reversed = reversed * 10 + lastDigit;
        n /= 10;
    }
    return reversed;
}
int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    int reversedNum = reverseNumber(num);
    cout << "The reverse of " << num << " is " << reversedNum << "." << endl;

    if (isPrime(reversedNum)) {
        cout << reversedNum << " is a prime number." << endl;
    } else {
        cout << reversedNum << " is not a prime number." << endl;
    }

    return 0;
}