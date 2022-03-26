#include <iostream>
using namespace std;

int num[499000000];

void push(int x){
    num[0]++;
    int cur = 1;
    while(x--)
        num[cur++]++;
}

void print(){
    while(num[0]){
        int cur = 1;
        int sum = 0;
        while(num[cur] == num[0])
            num[cur++]--, sum++;
        num[0]--;
        cout << sum << endl;
    }
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i += 1){
        int x;
        cin >> x;
        push(x);
    }
    print();
    return 0;
}