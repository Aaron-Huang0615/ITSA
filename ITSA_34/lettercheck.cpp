#include <iostream>

using namespace std;

int main() {
    char buffer[100];
    int count[26] = {}, word_count = 0;
    while (cin >> buffer) {
        for (char* ptr = buffer; *ptr != '\0'; ptr++) {
            if ((*ptr <= 'z' && *ptr >= 'a') || (*ptr <= 'Z' && *ptr >= 'A')) {
                if (*ptr <= 'z' && *ptr >= 'a')
                    count[*ptr - 'a'] += 1;
                else
                    count[*ptr - 'A'] += 1;
            }
        }
        word_count++;
    }
    
    cout << word_count << endl;
    
    for (int i = 0; i < 26; i++) {
        if (count[i]) {
            cout << char(i + 'a') << " : " << count[i] << endl;
        }
    }
    return 0;
}