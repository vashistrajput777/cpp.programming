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
    cricketer c1("Virat", 12000);
    cricketer* c2= new cricketer("Rohit", 9000);
    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<c2->name<<" "<<c2->runs<<endl;
}