#include <iostream>
using namespace std;

int main(){
    int num[4][4];
    while(cin >> num[0][0]){
        int zero_x = 0;
        int zero_y = 0;
        for(int i = 0; i < 4; i += 1){
            for(int j = 0; j < 4; j += 1){
                if(i == 0 && j == 0){
                    continue;
                }
                cin >> num[i][j];
                if(num[i][j] == 0){
                    zero_x = i, zero_y = j;
                }
            }
        }
        int n;
        cin >> n;
        while(n--){
            char a;
            cin >> a;
            switch(a){
                case 'U':
                    num[zero_x][zero_y] = num[zero_x - 1][zero_y];
                    num[zero_x - 1][zero_y] = 0;
                    zero_x -= 1;
                    break;
                case 'D':
                    num[zero_x][zero_y] = num[zero_x + 1][zero_y];
                    num[zero_x + 1][zero_y] = 0;
                    zero_x += 1;
                    break;
                case 'L':
                    num[zero_x][zero_y] = num[zero_x][zero_y - 1];
                    num[zero_x][zero_y - 1] = 0;
                    zero_y -= 1;
                    break;
                case 'R':
                    num[zero_x][zero_y] = num[zero_x][zero_y + 1];
                    num[zero_x][zero_y + 1] = 0;
                    zero_y += 1;
                    break;
            }
        }
        for(int i = 0; i < 4; i += 1){
            for(int j = 0; j < 4; j += 1){
                if(j != 0){
                    cout << " ";
                }
                if(num[i][j] < 10){
                    cout << " ";
                }
                if(num[i][j] == 0){
                    cout << " ";
                }else{
                    cout << num[i][j];
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}