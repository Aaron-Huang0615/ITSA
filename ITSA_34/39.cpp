#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int listening, reading, speaking;
        cin >> listening >> reading >> speaking;

        //P
        if ((listening >= 60 && reading >= 60 && speaking >= 60) || (listening + reading + speaking >= 220)) {
            cout << "P\n"; // Passed
        } 

        //M
        else if (((listening >= 60 && reading >= 60 && speaking < 60) ||
                   (listening >= 60 && reading < 60 && speaking >= 60) ||
                   (listening < 60 && reading >= 60 && speaking >= 60)) && (listening + reading + speaking < 220)) {
            cout << "M\n"; // Retake
        }
        else if((listening < 60 && reading < 60 && speaking >= 80) || (listening < 80 && reading >= 80 && speaking < 60) || (listening >= 80 && reading < 60 && speaking < 60)){
            cout << "M\n"; // Retake
        }
        else {
            cout << "F\n"; // Failed
        }
    }

    return 0;
}
