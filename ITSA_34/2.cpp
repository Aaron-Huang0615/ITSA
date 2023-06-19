#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char* argv[]){
    int mile;
    double km;

    cout << fixed << setprecision(1); //cout控制輸出的小數點位數

    while(cin >> mile){
        km = mile * 1.6;
        cout << km << endl;
    }

    return 0;
}

//https://it-easy.tw/cout-float/
