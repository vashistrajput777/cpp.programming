#include<iostream>
using namespace std;
class car{
public:
    string name;
    int seats;
    float price;
};
int main(){
    car c1;
    c1.name="BMW";
    c1.seats=4;
    c1.price=5000000;
    cout<<"Name: "<<c1.name<<endl;
    cout<<"Seats: "<<c1.seats<<endl;
    cout<<"Price: "<<c1.price<<endl;
}