#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char sub[256], str[1024];
    cin >> sub >> str;
    int count = 0, sub_length = strlen(sub);
    for (char* ptr = str; *ptr != '\0'; ptr++) {
        if (strncmp(ptr, sub, sub_length) == 0) //compare
            count++;
    }
    cout << count << endl;
    return 0;
}
