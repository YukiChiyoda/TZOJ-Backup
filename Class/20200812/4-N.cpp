#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){  
        int a, b;
        cin >> a >> b;
        int answer = 1;
        for(int i = 0; i < b; i += 1){
            answer = answer * a % 1000;
        }
        printf("%03d\n", answer);
    }
    return 0;
}