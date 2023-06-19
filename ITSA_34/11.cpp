#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int r, c;
    while (cin >> r >> c) {
        vector<vector<int>> arr(r, vector<int>(c));

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> arr[i][j];
            }
        }

        for (int j = 0; j < c; j++) {
            for (int i = 0; i < r; i++) {
                if (i != 0) {
                    cout << " ";
                }
                cout << arr[i][j];
            }
            cout << "\n";
        }
    }

    return 0;
}