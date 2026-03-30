#include <iostream>
#include <stack>
#include <string>
using namespace std;

class CodeEditor {
    stack<string> undoStack;
    stack<string> redoStack;
    stack<string> logStack;

    string text = "";   // initialize properly

public:
    void insert(char ch) {
        undoStack.push(text);
        text += ch;

        while (!redoStack.empty()) redoStack.pop();

        string log = "Inserted: ";
        log += ch;
        logStack.push(log);
    }

    void deleteChar() {
        if (text.empty()) {
            cout << "Nothing to delete\n";
            return;
        }

        undoStack.push(text);
        char removed = text.back();
        text.pop_back();

        while (!redoStack.empty()) redoStack.pop();

        string log = "Deleted: ";
        log += removed;
        logStack.push(log);
    }

    void undo() {
        if (undoStack.empty()) {
            cout << "Nothing to undo\n";
            return;
        }

        redoStack.push(text);
        text = undoStack.top();
        undoStack.pop();

        logStack.push("Undo operation");
    }

    void redo() {
        if (redoStack.empty()) {
            cout << "Nothing to redo\n";
            return;
        }

        undoStack.push(text);
        text = redoStack.top();
        redoStack.pop();

        logStack.push("Redo operation");
    }

    void display() {
        cout << "Current Text: " << text << endl;
    }

    void showLogs() {
        stack<string> temp = logStack;
        cout << "\n--- Operation Logs ---\n";
        while (!temp.empty()) {
            cout << temp.top() << endl;
            temp.pop();
        }
    }
};

int main() {
    CodeEditor editor;
    int choice;
    char ch;

    do {
        cout << "\n--- CODE EDITOR MENU ---\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Undo\n";
        cout << "4. Redo\n";
        cout << "5. Display\n";
        cout << "6. Show Logs\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter character: ";
                cin >> ch;
                editor.insert(ch);
                break;

            case 2:
                editor.deleteChar();
                break;

            case 3:
                editor.undo();
                break;

            case 4:
                editor.redo();
                break;

            case 5:
                editor.display();
                break;

            case 6:
                editor.showLogs();
                break;
        }

    } while (choice != 0);

    return 0;
}