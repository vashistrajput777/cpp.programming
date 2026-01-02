#include<iostream>
using namespace std;
int main(){
    int x = 5;
    cout<<x<<endl;
    cout<<x++<<endl;//post increment first use then increase
    cout<<x<<endl;

    cout<<x<<endl;
    cout<<++x<<endl;//first increase then use pre increment
    cout<<x<<endl;

    cout<<x<<endl;
    cout<<x--<<endl;//post decrement first use then decrease
    cout<<x<<endl;

    cout<<x<<endl;
    cout<<--x<<endl;//first decrease then use pre decerment
    cout<<x<<endl;
}