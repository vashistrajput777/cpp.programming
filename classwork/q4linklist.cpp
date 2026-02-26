#include<iostream>
using namespace std;

class PatientQueue {

    struct Node {
        int id;
        Node* next;
    };

    Node* head;
    Node* tail;

public:

    // Constructor
    PatientQueue() {
        head = NULL;
        tail = NULL;
    }

    // Check if queue is empty
    bool isEmpty() {
        return head == NULL;
    }

    // Add patient (Enqueue)
    void enqueue(int id) {
        Node* temp = new Node;
        temp->id = id;
        temp->next = NULL;

        if (isEmpty()) {
            head = tail = temp;
        }
         else {
            tail->next = temp;
            tail = temp;
        }

        cout << "Patient ID " << id << " added to queue.\n";
    }

    // Remove patient (Dequeue)
    void dequeue() {
        if (isEmpty()) {
            cout << "No patients in queue.\n";
            return;
        }

        Node* temp = head;
        cout << "Patient ID " << head->id << " is being treated.\n";
        head = head->next;

        if (head == NULL)
            tail = NULL;

        delete temp;
    }

    // Display queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return;
        }

        Node* temp = head;
        cout << "Patient Queue: ";
        while (temp != NULL) {
            cout << temp->id << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {

    PatientQueue hospital;
    int choice, id;

    do {
        cout << "\n---- Hospital Patient Queue ----\n";
        cout << "1. Add Patient\n";
        cout << "2. Treat Patient\n";
        cout << "3. Display Queue\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Patient ID: ";
            cin >> id;
            hospital.enqueue(id);
            break;

        case 2:
            hospital.dequeue();
            break;

        case 3:
            hospital.display();
            break;

        case 4:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}