#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int a, b;
        cin >> a >> b;
        int x = 0, y = 0;
        char num[10][10];
        for(int i = 0; i < a; i += 1){
            for(int j = 0; j < b; j += 1){
                cin >> num[i][j];
                if(num[i][j] == 's'){
                    x = i, y = j;
                }
            }
        }
        double min_distance = INT_MAX;
        int min_position[2] = {-1, -1};
        for(int i = 0; i < a; i += 1){
            for(int j = 0; j < b; j += 1){
                if(num[i][j] == 'd'){
                    double distance = sqrt(pow(abs(i - x), 2) + pow(abs(j - y), 2));
                    if(distance < min_distance){
                        min_distance = distance;
                        min_position[0] = i, min_position[1] = j;
                    }
                }
            }
        }
        printf("(%d,%d)\n", min_position[0], min_position[1]);
    }
    return 0;
}