#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no.";
    cin>>n;
    int sum = 0;
    while(n!=0){
        int ld = n%10;
        n/= ld;
        sum += ld;
    }
    cout<<sum;
}