#include<iostream>
using namespace std;

class bankaccount {
private:
    string accnt;
    long acc_no;
    double balance;

    bool is_valid(double amount) {
        return amount > 0;
    }

public:
    bankaccount(string h, long n, double ibal) {
        accnt = h;
        acc_no = n;
        if (ibal > 0) {
            balance = ibal;
        } else {
            balance = 0;
        }
    }

    string get_accnt() {
        return accnt;
    }

    long get_acc_no() {
        return acc_no;
    }

    double get_balance() {
        return balance;
    }

    void deposit(double amount) {
        if (is_valid(amount)) {
            balance += amount;
            cout << "Deposit successful. New balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (is_valid(amount)) {
            if (amount <= balance) {
                balance -= amount;
                cout << "Withdrawal successful. New balance: " << balance << endl;
            } else {
                cout << "Insufficient funds." << endl;
            }
        } else {
            cout << "Invalid withdrawal amount." << endl;
        }
    }
};

int main() {
    bankaccount account1("John Doe", 123456789, 1000.0);

    cout << "Account Holder: " << account1.get_accnt() << endl;
    cout << "Account Number: " << account1.get_acc_no() << endl;
    cout << "Initial Balance: " << account1.get_balance() << endl;

    account1.deposit(500.0);
    account1.withdraw(200.0);
    account1.withdraw(1500.0);

    return 0;
}
