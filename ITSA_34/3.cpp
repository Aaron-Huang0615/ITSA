#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    int x, y;
    
    while(cin >> x >> y){
        if(x > 100 || x < -100 || y > 100 || y < -100){
            cout << "outside\n";
        }
        else{
            cout << "inside\n";
        }
    }
    
    return 0;
}
