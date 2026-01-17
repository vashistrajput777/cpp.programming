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
    if(a>b && a>c){
        cout<<"a is the greatest";
    }
    if(b>c&&b>a){
        cout<<"b is the greatest";
    }
    else{
        cout<<"c is the greatest";
    }
}    