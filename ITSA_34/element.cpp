#include <iostream>
#include <vector>
#include <unordered_map>
#include <sstream>

using namespace std;

int findMajorityElement(const vector<int>& nums) {
    int n = nums.size();
    unordered_map<int, int> counts;

    for (int num : nums) {
        counts[num]++;
        if (counts[num] > n / 2) {
            return num;
        }
    }

    return -1;
}

int main() {
    string input;
    while (getline(cin, input)) {
        vector<int> nums;
        int num;
        istringstream iss(input);
        while (iss >> num) {
            nums.push_back(num);
        }

        int majorityElement = findMajorityElement(nums);
        if (majorityElement != -1) {
            cout << majorityElement << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}