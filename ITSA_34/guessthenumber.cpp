#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string getHint(const string& answer, const string& guess) {
    int len = answer.length();
    int numA = 0, numB = 0;

    string tempAnswer = answer;
    string tempGuess = guess;

    // Count the number of A
    for (int i = 0; i < len; i++) {
        if (tempAnswer[i] == tempGuess[i]) {
            numA++;
            tempAnswer[i] = '*';  // Mark the position as visited in answer
            tempGuess[i] = '#';   // Mark the position as visited in guess
        }
    }

    // Count the number of B
    for (int i = 0; i < len; i++) {
        if (tempGuess[i] == '#') continue;  // Skip visited positions

        size_t pos = tempAnswer.find(tempGuess[i]);
        if (pos != string::npos) {
            numB++;
            tempAnswer[pos] = '*';  // Mark the position as visited in answer
            tempGuess[i] = '#';     // Mark the position as visited in guess
        }
    }

    return to_string(numA) + "A" + to_string(numB) + "B";
}

int main() {
    string answer;
    string guess;

    getline(cin, answer);

    while (getline(cin, guess)) {
        if (guess == "0000") return 0;

        string hint = getHint(answer, guess);
        cout << hint << endl;
    }

    return 0;
}