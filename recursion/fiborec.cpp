#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1 || n==2) return 1;
    return fibo(n-2) + fibo(n-1);
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    cout<<fibo(n);
}