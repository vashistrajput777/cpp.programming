#include<iostream>
using namespace std;
int main(){
    int n = 1234;
    int rev =0,sum=0;
    while (n!=0)
    {
        sum = n%10;
        rev = rev*10 + sum;
        n= n/10;
    }
    cout <<"the rev is "<<rev;
    return 0;    
}