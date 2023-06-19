#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string specialPrize, firstPrize1, firstPrize2, firstPrize3;
    int N;
    unordered_map<string, int> prizeCount;
    
    cin >> specialPrize >> firstPrize1 >> firstPrize2 >> firstPrize3 >> N;
    
    for (int i = 0; i < N; i++) {
        string invoice;
        cin >> invoice;
        
        if (invoice == specialPrize) {
            prizeCount["Special"]++;
        } else if (invoice == firstPrize1 || invoice == firstPrize2 || invoice == firstPrize3) {
            prizeCount["First"]++;
        } else if (invoice.substr(1) == firstPrize1.substr(1) || invoice.substr(1) == firstPrize2.substr(1) || invoice.substr(1) == firstPrize3.substr(1)) {
            prizeCount["Second"]++;
        } else if (invoice.substr(2) == firstPrize1.substr(2) || invoice.substr(2) == firstPrize2.substr(2) || invoice.substr(2) == firstPrize3.substr(2)) {
            prizeCount["Third"]++;
        } else if (invoice.substr(3) == firstPrize1.substr(3) || invoice.substr(3) == firstPrize2.substr(3) || invoice.substr(3) == firstPrize3.substr(3)) {
            prizeCount["Fourth"]++;
        } else if (invoice.substr(4) == firstPrize1.substr(4) || invoice.substr(4) == firstPrize2.substr(4) || invoice.substr(4) == firstPrize3.substr(4)) {
            prizeCount["Fifth"]++;
        } else if (invoice.substr(5) == firstPrize1.substr(5) || invoice.substr(5) == firstPrize2.substr(5) || invoice.substr(5) == firstPrize3.substr(5)) {
            prizeCount["Sixth"]++;
        }
    }
    
    cout << prizeCount["Special"] << " " << prizeCount["First"] << " " << prizeCount["Second"] << " "
         << prizeCount["Third"] << " " << prizeCount["Fourth"] << " " << prizeCount["Fifth"] << " "
         << prizeCount["Sixth"] << endl;
    
    int totalPrize = prizeCount["Special"] * 2000000 + prizeCount["First"] * 200000 +
                     prizeCount["Second"] * 40000 + prizeCount["Third"] * 10000 +
                     prizeCount["Fourth"] * 4000 + prizeCount["Fifth"] * 1000 +
                     prizeCount["Sixth"] * 200;
                     
    cout << totalPrize << endl;

    return 0;
}
