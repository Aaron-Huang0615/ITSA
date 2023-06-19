#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getDigitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

bool compareNumbers(int a, int b) {
    int sumA = getDigitSum(a);
    int sumB = getDigitSum(b);

    if (sumA == sumB)
        return a < b;
    return sumA < sumB;
}

int main() {
    int N;
    cin >> N;

    vector<int> numbers(N);
    for (int i = 0; i < N; i++)
        cin >> numbers[i];

    sort(numbers.begin(), numbers.end(), compareNumbers);

    for (int i = 0; i < N; i++)
        cout << numbers[i] << " ";
    cout << endl;

    return 0;
}