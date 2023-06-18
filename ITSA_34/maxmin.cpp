#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double arr[10];
    for (int i = 0; i < 10; i++){
        cin >> arr[i];
    }
    double max = arr[0], min = arr[0];
    for (int i = 0; i < 10; i++){
        if (max < arr[i])
            max = arr[i];
        if (min > arr[i])
            min = arr[i];
    }
    cout << "maximum:" << fixed << setprecision(2) << max << endl;
    cout << "minimum:" << fixed << setprecision(2) << min << endl;
    return 0;
}
