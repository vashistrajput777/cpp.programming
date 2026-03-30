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
void change(cricketer *ptr){
    ptr->runs = 15000;
}
};
int main(){
    cricketer c1("Virat", 12000);
    cricketer *ptr = &c1;
    cout<<c1.runs<<endl;
    cout<<(*ptr).runs<<endl;
    cout<<c1.runs<<endl;
    (*ptr).runs = 13000;
    cout<<c1.runs<<endl;
    return 0;
}