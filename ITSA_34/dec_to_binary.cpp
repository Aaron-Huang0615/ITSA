#include <iostream>
#include <bitset>

using namespace std;

int main(int argc, char** argv){
    int decimal;
    
    while(cin >> decimal){
        // 將整數轉換為8位元的二進制表示
        bitset<8> binary(decimal);
        cout << binary << "\n";
    }

    return 0;
}