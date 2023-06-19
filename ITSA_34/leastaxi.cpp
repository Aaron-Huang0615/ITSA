#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<pair<int, int>> orders;
    for (int i = 0; i < n; i++) {
        int s, d;
        cin >> s >> d;
        orders.push_back({s, d});
    }
    
    sort(orders.begin(), orders.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second;
    });
    
    int count = 1;
    int end = orders[0].second;
    for (int i = 1; i < n; i++) {
        if (orders[i].first >= end) {
            count++;
            end = orders[i].second;
        }
    }
    
    cout << count << endl;
    
    return 0;
}
