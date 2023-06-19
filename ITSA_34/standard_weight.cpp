#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double height, gender;
    
    while (cin >> height >> gender) {
        double weight;
        
        if (gender == 1) {
            weight = (height - 80) * 0.7;
        } else if (gender == 2) {
            weight = (height - 70) * 0.6;
        }
        
        cout << fixed << setprecision(1) << weight << endl;
    }
    
    return 0;
}