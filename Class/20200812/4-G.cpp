#include <iostream>
using namespace std;

int num[10000], total;
const int N = 100000001;
int is_Prime[N], sum[N];

bool Prime(int n){
    if(n < 2){
        return false;
    }
    for(int i = 2; i * i < n; i += 1){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

void Do(){
    for(int i = 1; i < 10000; i += 1){
        if(Prime(i)){
            num[total++] = i;
        }
    }
}

void GKD(){
    is_Prime[1] = 1;
    for(int i = 0; i < total; i += 1){
        for(int j = 2; ; j += 1){
            if(num[i] * 1LL * j >= N){
                break;
            }
            is_Prime[num[i] * j] = 1;
        }
    }
    for(int i = 1; i < N; i += 1){
        if(is_Prime[i] == 1){
            sum[i] = sum[i - 1];
        }else{
            sum[i] = sum[i - 1] + 1;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    Do();
    int n;
    GKD();
    while(cin >> n, n){
        cout << sum[n] << endl;
    }
    cout << total << endl;
    return 0;
}