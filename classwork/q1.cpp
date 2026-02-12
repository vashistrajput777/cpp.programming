//Design a student info system which take input from user for student's details which contains id,name,marks of five subjects calculate the total marks and persentage then desplay id'name,total marks and persentage and grade .
#include<iostream>
using namespace std;
int main(){
    int id, marks[5], total = 0;
    char name[50];
    float percentage;
    char grade;
    // Input student details
    cout << "Enter student ID: ";
    cin >> id;
    cout << "Enter student name: ";
    cin >> name;
    // Input marks for 5 subjects   
    cout << "Enter marks for 5 subjects: ";
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
        total += marks[i];
    }
    // Calculate percentage
    percentage = (total / 500.0) * 100;
    //grade calculation
    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    // Display student details
    cout << "Student ID: " << id << endl;
    cout << "Student Name: " << name << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;
}