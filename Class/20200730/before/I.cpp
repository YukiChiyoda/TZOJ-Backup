#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int num[10][10];
    int max_line_position[10];
    for(int i = 0; i < a; i += 1){
        int max = INT_MIN;
        for(int j = 0; j < b; j += 1){
            cin >> num[i][j];
            if(num[i][j] > max){
                max = num[i][j];
                max_line_position[i] = j;
            }
        }
    }
    
    bool flag = false;
    for(int i = 0; i < a; i += 1){
        flag = false;
        for(int j = 0; j < a; j += 1){
            if(num[i][max_line_position[i]] > num[j][max_line_position[i]]){
                flag = true;
            }
        }
        if(flag == false){
            printf("Array[%d][%d]=%d\n", i, max_line_position[i], num[i][max_line_position[i]]);
            return 0;
        }
    }
    if(flag == true){
        cout << "None" << endl;
    }
    return 0;
}