#include <iostream>

using namespace std;

class complex{
    public:
        int real1, vt1, real2, vt2, outreal, outvt;
        char op;
};

int main(int argc, char* argv[]){
    int data_num;
    cin >> data_num;
    complex data[data_num];
    for(int i = 0 ; i < data_num ; i++){
        cin >> data[i].op >> data[i].real1 >> data[i].vt1 >> data[i].real2 >> data[i].vt2;
        if(data[i].op == '+'){
            data[i].outreal = data[i].real1 + data[i].real2;
            data[i].outvt = data[i].vt1 + data[i].vt2;
        }
        else if(data[i].op == '-'){
            data[i].outreal = data[i].real1 - data[i].real2;
            data[i].outvt = data[i].vt1 - data[i].vt2;
        }
        else if(data[i].op == '*'){
            data[i].outreal = (data[i].real1 * data[i].real2 - data[i].vt1 * data[i].vt2);
            data[i].outvt = (data[i].real1 * data[i].vt2 + data[i].vt1 * data[i].real2);
        }
    }

    for(int i = 0 ; i < data_num ; i++){
        cout << data[i].outreal << " " << data[i].outvt << "\n";
    }
    
    return 0;
}