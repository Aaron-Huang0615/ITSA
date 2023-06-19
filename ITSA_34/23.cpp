#include <iostream>
#include <cstdio>

using namespace std;


int main() {
    int money, change, apple_num, orange_num, peach_num, ch_50, ch_5, ch_1;
    scanf("%d,%d,%d,%d", &money, &apple_num, &orange_num, &peach_num);

    change = money - (apple_num * 15) - (orange_num * 20) - (peach_num * 30);
    if(change < 0){
        cout << "0\n";
        return 0;
    }

    //50 change
    ch_50 = change / 50;
    change %= 50;

    //5 change
    ch_5 = change / 5;
    change %= 5;

    //1 change
    ch_1 = change;

    cout << ch_1 << "," << ch_5 << "," << ch_50 <<"\n";

    return 0;
}
