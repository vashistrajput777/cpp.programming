#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter the no.";
   cin>>n;
   int a=1;
   for( int i=1;i<=n;i++){
        cout<<a<<" ";
        a = a * 2;
   }
}