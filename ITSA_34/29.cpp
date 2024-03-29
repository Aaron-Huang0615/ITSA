#include <iostream>
#include <string>

using namespace std;

int main() {
    char str[25];
    int table[26] = {}, temp = 10;
    for (int i = 0; i < 25; i++) {
        if (i == 'i' - 'a' || i == 'w' - 'a' || i == 'z' - 'a' || i == 'o' - 'a')
            continue;
        table[i] = temp;
        temp++;
    }
    table['i' - 'a'] = 34;
    table['w' - 'a'] = 32;
    table['z' - 'a'] = 33;
    table['o' - 'a'] = 35;

    while (cin >> str) {
        if (str[1] != '1' && str[1] != '0') {
            cout << "WRONG!!!" << endl;
            continue;
        }

        int x = table[str[0] - 'A'];
        int x1 = x / 10, x2 = x % 10;
        int p = x1 + x2 * 9;

        for (int i = 8; i > 0; i--) {
            p += (str[9 - i] - '0') * i;
        }
        p += str[9] - '0';

        if (p % 10)
            cout << "WRONG!!!" << endl;
        else
            cout << "CORRECT!!!" << endl;
    }

    return 0;
}
