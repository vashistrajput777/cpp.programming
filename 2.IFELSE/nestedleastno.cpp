#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    cout<<"enter c:";
    cin>>c;
    if(a<b){
        if(a<c)
        cout<<"a is the least";
    }
    if(b<a){
        if(b<c)
        cout<<"b is the least";
    }
    if(c<a){
        if(c<b)
        cout<<"c is the least";
    }
}    