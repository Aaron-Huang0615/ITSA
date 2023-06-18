#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str[100];
    while(cin >> str){
        int length = strlen(str);
        int flag = 1;

        for (int i = 0; i < length / 2; i++) {
            if (str[i] != str[length - i - 1]) {
                flag = 0;
                break;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}