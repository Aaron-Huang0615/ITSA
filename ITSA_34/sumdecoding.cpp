#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Ignore the newline character after reading n
    
    while (n--) {
        int sum = 0;
        string str;
        getline(cin, str); // Read the entire line as a string
        
        for (char c : str) {
            if (c != '\n')
                sum += c;
        }

        cout << sum << endl;
    }
    
    return 0;
}

