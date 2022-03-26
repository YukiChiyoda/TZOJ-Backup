#include <iostream>
using namespace std;

int main(){
    int num;
    while(cin >> num){
        bool flag = false;
        for (int i = 1; i * i <= num; i += 1){
            for (int j = 1; j * j <= num; j += 1){
                for (int k = 1; k * k <= num; k += 1){
                    if(i * i + j * j + k * k == num){
                        cout << i << " " << j << " " << k << endl;
                        goto end;
                    }
                }
            }
        }
        end:
            continue;
    }
    return 0;
}