#include<iostream>
using namespace std;
int main(){
    int cp;
    int sp;
    cout<<"Enter cost price:";
    cin>>cp;
    cout<<"Enter selling price:";
    cin>>sp;
    if(cp==sp){
        cout<<"No profit no loss";
    }
    if(cp>sp){
        cout<<"Loss!:";
        cout<< cp-sp;
    }    
    if (cp<sp){
        cout<<"Profit:";
        cout<< sp-cp;
    }       
}