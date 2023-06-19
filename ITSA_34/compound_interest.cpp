#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double r; // 每期利率
    int n; // 期數
    int p; // 每期投入金額

    // 讀取輸入
    cin >> r >> n >> p;

    // 計算本利和
    double balance = 0;
    for (int i = 0; i < n; i++) {
        balance = (balance + p) * (1 + r);
    }

    // 輸出結果（無條件捨去為整數）
    cout << (int)round(balance) << endl;

    return 0;
}
