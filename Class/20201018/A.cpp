#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int num[100];
    int final = 0;
    for(int i = 0; i < n; i += 1){
        cin >> num[i];
        final += num[i];
    }
    final /= n;
    int temp = 0;
    int answer = 0;
    for(int i = 0; i < n; i += 1){
        temp += num[i] - final;
        if(temp)
            answer += 1;
    }
    cout << answer << endl;
    return 0;
}