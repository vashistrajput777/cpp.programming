#include<iostream>
using namespace std;
class student{
public:
    string name;
    int rollno;
    float gpa;

    student(string n, int r, float g){
        name = n;
        rollno = r;
        gpa = g;
    }
};
int main(){
    student s1("vashistha",1,9.9);
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Roll No: "<<s1.rollno<<endl; 
    cout<<"GPA: "<<s1.gpa<<endl;
    return 0;
}