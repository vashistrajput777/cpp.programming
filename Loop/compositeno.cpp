#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter the no.";
   cin>>n;
   for(int i=2;i<=n/2;i++){
      if(i%1==0){
        cout<<"composite";     
      }
      break;
   }
}