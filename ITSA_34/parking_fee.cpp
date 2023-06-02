#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    //input part
    int hour_in, minute_in, hour_out, minute_out, Ttime, money;
    cin >> hour_in >> minute_in >> hour_out >> minute_out;

    //time part
    Ttime = (hour_out - hour_in) * 60 + (minute_out - minute_in);
    if(hour_out < hour_in){
        Ttime = (24 - hour_in + hour_out) * 60 + (minute_out - minute_in);
    }
    
    //money part
    if(Ttime < 30){
        money = 0;
    }
    else if(Ttime <= 120){
        money = Ttime / 30 * 30;
    }
    else if(Ttime > 120 && Ttime <= 240){
        money = 120 + (Ttime - 120) / 30 * 40;
    }
    else if(Ttime > 240){
        money = 120 + 160 + (Ttime - 240) / 30 * 60;
    }

    //output
    cout << money << "\n";

    return 0;
}