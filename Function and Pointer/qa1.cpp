#include<iostream>
using namespace std;
void greet(){
    cout<<"good morning"<<endl;
    cout<<"how are you?"<<endl;
}
int main(){
    greet();//function call
    cout<<"hey"<<endl;
    greet();
}