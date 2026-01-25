#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"enter arr element:";
    for(int i=0;i<=4;i++){
       cin>>arr[i];
    }
    for(int i=0;i<=4;i++){
        cout<<arr[i]*2<<" ";
    }
}