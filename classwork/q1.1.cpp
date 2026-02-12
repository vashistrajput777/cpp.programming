#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    int id[100];
    string name[30];
    int marks[5];
    int total;
    float percentage;
    char grade;

    for(int i = 0; i < n; i++) {
        total = 0;

        cout << "\nEnter details for student " << i + 1 << endl;

        cout << "Enter student ID: ";
        cin >> id[i];

        cout << "Enter student name: ";
        cin >> name[i];

        cout << "Enter marks for 5 subjects: ";
        for(int j = 0; j < 5; j++) {
            cin >> marks;
            total+= marks;
        }

        // Calculate percentage
        percentage[i] = (total[i] / 500.0) * 100;

        // Grade calculation
        if (percentage[i] >= 90)
            grade[i] = 'A';
        else if (percentage[i] >= 80)
            grade[i] = 'B';
        else if (percentage[i] >= 70)
            grade[i] = 'C';
        else if (percentage[i] >= 60)
            grade[i] = 'D';
        else
            grade[i] = 'F';
    }

    // Display all student details
    cout << "\n----- Student Records -----\n";

    for(int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << " Details:" << endl;
        cout << "ID: " << id[i] << endl;
        cout << "Name: " << name[i] << endl;
        cout << "Total Marks: " << total[i] << endl;
        cout << "Percentage: " << percentage[i] << "%" << endl;
        cout << "Grade: " << grade[i] << endl;
    }

    return 0;
}
