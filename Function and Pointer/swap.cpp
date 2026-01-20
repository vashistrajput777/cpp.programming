#include<iostream>
using namespace std;
int main(){
    int x =12;
    int y = 45;
    cout<<x<<" "<<y<<endl;
    x = x+y;
    y = x-y;
    x = x-y;
    cout<<x<<" "<<y<<endl;
}