#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    int r = 0;
    int count;
    while(n!=0){
        int ld = n%10;
        r*=10;
        r+=ld;
        n = n/10;
        count++;
    }
    cout<<count;
}