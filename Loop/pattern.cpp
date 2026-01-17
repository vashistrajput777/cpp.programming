#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the no of rows";
    cin>>m;
    int n;
    cout<<"enter the no of column";
    cin>>n;
    for(int i=1;i<=m;i++){
        for(int i=1;i<=n;i++){
            cout<<"*";
        }
        cout<<endl;
    }
}