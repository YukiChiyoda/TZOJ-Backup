#include <iostream>
using namespace std;

int main(){
    int num[11112] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    for(int i = 10; i <= 11111; i += 1){
        int x = i;
        while(x != 0){
            num[i] += num[x % 10];
            x = x / 10;
        }
    }
    int n;
    cin >> n;
    n -= 4;
    int s = 0;
    for(int a = 0; a <= 11111; a += 1){
        for(int b = 0; b <= 11111; b += 1){
            int c = a + b;
            if(c > 11111){
                break;
            }
            if(num[a] + num[b] + num[c] == n){
                s += 1;
            }
        }
    }
    cout << s << endl;
    return 0;
}