#include <iostream>
using namespace std;

int main(){
    int a, b;
    while(cin >> a >> b, a && b){
        a = a * 100;
        bool flag = false;
        for (int i = 0; i < 100; i += 1){
            int k = a + i;
            if(k % b == 0){
                if(flag == false){
                    printf("%02d", i);
                    flag = true;
                }else{
                    printf(" %02d", i);
                }
            }
        }
        cout << endl;
    }
}