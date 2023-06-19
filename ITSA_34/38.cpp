#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int degree;
    cin >> degree;

    if (degree <= 120) {
        cout << "Summer months:" << fixed << setprecision(2) << (2.10 * degree) << endl;
        cout << "Non-Summer months:" << fixed << setprecision(2) << (2.10 * degree) << endl;
    } else if (degree <= 330) {
        cout << "Summer months:" << fixed << setprecision(2) << (3.02 * (degree - 120) + (120 * 2.10)) << endl;
        cout << "Non-Summer months:" << fixed << setprecision(2) << (2.68 * (degree - 120) + (120 * 2.10)) << endl;
    } else if (degree <= 500) {
        cout << "Summer months:" << fixed << setprecision(2) << (4.39 * (degree - 330) + (120 * 2.10) + (210 * 3.02)) << endl;
        cout << "Non-Summer months:" << fixed << setprecision(2) << (3.61 * (degree - 330) + (120 * 2.10) + (210 * 2.68)) << endl;
    } else if (degree <= 700) {
        cout << "Summer months:" << fixed << setprecision(2) << (4.97 * (degree - 500) + (120 * 2.10) + (210 * 3.02) + (170 * 4.39)) << endl;
        cout << "Non-Summer months:" << fixed << setprecision(2)  << (4.01 * (degree - 500) + (120 * 2.10) + (210 * 2.68) + (170 * 3.61)) << endl;
    } else {
        cout << "Summer months:" << fixed << setprecision(2) << (5.63 * (degree - 700) + (120 * 2.10) + (210 * 3.02) + (170 * 4.39) + (200 * 4.97)) << endl;
        cout << "Non-Summer months:" << fixed << setprecision(2) << (4.50 * (degree - 700) + (120 * 2.10) + (210 * 2.68) + (170 * 3.61) + (200 * 4.01)) << endl;
    }

    return 0;
}
