#include <iostream>
#include <string>

using namespace std;

string encryptMessage(const string& message, int shift) {
    string encryptedMessage = "";
    int n = message.length();

    for (int i = 0; i < n; i++) {
        char ch = message[i];

        if (isalpha(ch)) {
            char base = isupper(ch) ? 'A' : 'a';
            ch = base + (ch - base + shift) % 26;
        } else if (isdigit(ch)) {
            ch = '0' + (ch - '0' + shift) % 10;
        }

        encryptedMessage += ch;
    }

    return encryptedMessage;
}

int main() {
    string message;
    getline(cin, message);

    int shift;
    cin >> shift;
    cin.ignore();  // Ignore the newline character

    string encryptedMessage = encryptMessage(message, shift);
    cout << encryptedMessage << endl;

    return 0;
}
