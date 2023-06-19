#include <iostream>

using namespace std;

int main() {
    int arr[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    bool flag = false;
    for (int i = 0; i < 3; i++) {
        if (arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2]) {
            flag = true;
            break;
        }
    }

    if (!flag) {
        for (int i = 0; i < 3; i++) {
            if (arr[0][i] == arr[1][i] && arr[0][i] == arr[2][i]) {
                flag = true;
                break;
            }
        }
    }

    if (!flag) {
        if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]) {
            flag = true;
        } else if (arr[2][0] == arr[1][1] && arr[1][1] == arr[0][2]) {
            flag = true;
        }
    }

    cout << (flag ? "True" : "False") << endl;

    return 0;
}
