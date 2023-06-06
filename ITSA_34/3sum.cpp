#include <iostream>

using namespace std;

int main(int argc, char** argv){
    int num, sum;
    cin >> num;

    for(int i = 1 ; i <= num ; i++){
        if(i % 3 == 0){
            sum += i;
        }
    }

    cout << sum << "\n";

    return 0;
}