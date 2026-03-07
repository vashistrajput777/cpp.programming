#include<iostream>
using namespace std;
class cricketer{
public:
    string name;
    int runs;
cricketer(string n, int r){
    name = n;
    runs = r;
}
};
int main(){
    cricketer c1("virat", 12000);
    cout<<"Name: "<<c1.name<<endl;
    cout<<"Runs: "<<c1.runs<<endl;
    
}