#include<iostream>
using namespace std;
class student{
public:
    string name;
    int rollno;
    float gpa;
};
int main(){ 
    student s1;
    s1.name="uatshishth";
    s1.rollno=101;
    s1.gpa=8.9;
    student s2;
    s2.name="vashist";
    s2.rollno=101;
    s2.gpa=9.9;
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Roll No: "<<s1.rollno<<endl;
    cout<<"GPA: "<<s1.gpa<<endl;
}