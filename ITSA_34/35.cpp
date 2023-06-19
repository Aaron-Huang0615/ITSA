#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int T, m, k;
        cin >> T >> m >> k;

        vector<int> prices(k);
        for (int j = 0; j < k; j++) {
            cin >> prices[j];
        }

        // 將物品價格按升序排序
        sort(prices.begin(), prices.end());

        int totalCost = 0;
        int giftsBought = 0;
        for (int j = 0; j < k; j++) {
            // 若預算不足或已購買足夠量的禮物，跳出迴圈
            if (totalCost + prices[j] > T || giftsBought >= m) {
                break;
            }

            totalCost += prices[j];
            giftsBought++;
        }

        // 判斷是否成功購買足夠量的禮物
        if (giftsBought < m) {
            cout << "Impossible" << endl;
        } else {
            cout << totalCost << endl;
        }
    }

    return 0;
}
