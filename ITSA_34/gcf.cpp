#include <iostream>

using namespace std;

int main(int argc, char** argv){
    int num1, num2, small;
    cin >> num1 >> num2;

    if(num1 < num2){
        small = num1;
    }
    else{
        small = num2;
    }

    for(int i = small ; i > 0 ; i--){
        if((num1 % i == 0) && (num2 % i == 0)){
            cout << i << "\n";
            return 0;
        }
    }
}