#include<iostream>
#include<fstream>
#include<cstring>
#include<string>
using namespace std;
class Student{
    int id;
    string name;
    float marks;

public:
    void input(){
        cout<<"enter students id: ";
        cin>>id;
        cout<<"enter students name: ";
        cin>>name;
        cout<<"enter students marks: ";
        cin>>marks;
    }

    void display(){
        cout<<"students id: "<<id<<endl;
        cout<<"students name: "<<name<<endl;
        cout<<"students marks: "<<marks<<endl;
    }
};
void addstudent(){
    Student s;
    ofstream fout("students.txt", ios::app);
    s.input();
    fout.write((char*)&s, sizeof(s));
    fout.close();
    cout<<"Student record entered"<<endl;
}

// function to view students
void viewstudents(){
    Student s;
    ifstream fin("students.txt");
    while(fin.read((char*)&s, sizeof(s))){
        s.display();
    }
    fin.close();
}

int main(){
    int ch;
    cout<<"Student Management System"<<endl;
    cout<<"1. Add Student"<<endl;
    cout<<"2. View Students"<<endl;
    cout<<"Enter your choice:";
    cin>>ch;    

    switch(ch)
    {
        case 1:
            addstudent();
            break;
        case 2:
            viewstudents();
            break;
        default:
            cout<<"Invalid choice"<<endl;
    }
    return 0;
}