#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;

    cout << "Chatbot started (type 'bye' to exit)\n";

    while (true) {
        cout << "\nYou: ";
        getline(cin, input);

        if (input == "hello") {
            cout << "Bot: Hi! How can I help you?\n";
        }
        else if (input == "how are you") {
            cout << "Bot: I am fine! What about you?\n";
        }
        else if (input == "your name") {
            cout << "Bot: I am a simple chatbot.\n";
        }
        else if (input == "bye") {
            cout << "Bot: Goodbye!\n";
            break;
        }
        else {
            cout << "Bot: Sorry, I don't understand.\n";
        }
    }

    return 0;
}