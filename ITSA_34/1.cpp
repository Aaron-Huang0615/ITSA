/*
***** * ***** ***** *   * ***** ***** ***** ***** *****
*   * *     *     * *   * *     *         * *   * *   *
*   * * ***** ***** ***** ***** *****     * ***** *****
*   * * *         *     *     * *   *     * *   *     *
***** * ***** *****     * ***** *****     * *****     *
*/
#include <iostream>
using namespace std;

class led{
    public:
    char shape[5][5];
};

int main(int argc, char* argv[]){
    //breakdown input
    int input, num1, num2, num3, num4;

    cin >> input;
    
    num1 = input / 1000;
    num2 = (input % 1000) / 100;
    num3 = (input % 100) / 10;
    num4 = (input % 10);

    led obj[10];

    for(int i = 0 ; i < 10 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            for(int k = 0 ; k < 5 ; k++){
                obj[i].shape[j][k] = ' ';
            }
        }
    }

    //0
    for(int i = 0 ; i < 5 ; i++){
        obj[0].shape[0][i] = '*';
        obj[0].shape[i][0] = '*';
        obj[0].shape[4][i] = '*';
        obj[0].shape[i][4] = '*';
    }

    //1
    for(int i = 0 ; i < 5 ; i++){
        obj[1].shape[i][4] = '*';
    }

    //2
    for(int i = 0 ; i < 5 ; i++){
        obj[2].shape[0][i] = '*';
        obj[2].shape[2][i] = '*';
        obj[2].shape[4][i] = '*';
        obj[2].shape[1][4] = '*';
        obj[2].shape[3][0] = '*';
    }

    //3
    for(int i = 0 ; i < 5 ; i++){
        obj[3].shape[0][i] = '*';
        obj[3].shape[2][i] = '*';
        obj[3].shape[4][i] = '*';
        obj[3].shape[1][4] = '*';
        obj[3].shape[3][4] = '*';
    }

    //4
    for(int i = 0 ; i < 5 ; i++){
        obj[4].shape[2][i] = '*';
        obj[4].shape[i][4] = '*';
        obj[4].shape[0][0] = '*';
        obj[4].shape[1][0] = '*';
    }

    //5
    for(int i = 0 ; i < 5 ; i++){
        obj[5].shape[0][i] = '*';
        obj[5].shape[2][i] = '*';
        obj[5].shape[4][i] = '*';
        obj[5].shape[1][0] = '*';
        obj[5].shape[3][4] = '*';
    }

    //6
    for(int i = 0 ; i < 5 ; i++){
        obj[6].shape[0][i] = '*';
        obj[6].shape[2][i] = '*';
        obj[6].shape[4][i] = '*';
        obj[6].shape[1][0] = '*';
        obj[6].shape[3][4] = '*';
        obj[6].shape[3][0] = '*';
    }

    //7
    for(int i = 0 ; i < 5 ; i++){
        obj[7].shape[0][i] = '*';
        obj[7].shape[i][4] = '*';
    }

    //8
    for(int i = 0 ; i < 5 ; i++){
        obj[8].shape[0][i] = '*';
        obj[8].shape[2][i] = '*';
        obj[8].shape[4][i] = '*';
        obj[8].shape[1][0] = '*';
        obj[8].shape[1][4] = '*';
        obj[8].shape[3][4] = '*';
        obj[8].shape[3][0] = '*';
    }

    //9
    for(int i = 0 ; i < 5 ; i++){
        obj[9].shape[0][i] = '*';
        obj[9].shape[2][i] = '*';
        obj[9].shape[i][4] = '*';
        obj[9].shape[1][0] = '*';
    }

    //output part
    for(int i = 0 ; i < 5 ; i++){             
        for(int j = 0 ; j < 5 ; j++){
            cout << obj[num1].shape[i][j];
        }
        cout << " ";
        for(int j = 0 ; j < 5 ; j++){
            cout << obj[num2].shape[i][j];
        }
        cout << " ";
        for(int j = 0 ; j < 5 ; j++){
            cout << obj[num3].shape[i][j];
        }
        cout << " ";
        for(int j = 0 ; j < 5 ; j++){
            cout << obj[num4].shape[i][j];
        }
        cout << "\n";
    }

    return 0;
}
