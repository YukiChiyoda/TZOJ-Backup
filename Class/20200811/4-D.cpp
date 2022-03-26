#include <iostream>
#include <string>
using namespace std;

bool Prime(int n){
    if(n < 2){
        return false;
    }
    for(int i = 2; i < n; i += 1){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    string s;
    cin >> s;
    int num[26] = {0};
    for(int i = 0; i < s.length(); i += 1){
        num[s[i] - 'a'] += 1;
    }
    int min_num = 114514;
    int max_num = -114514;
    for(int i = 0; i < 26; i += 1){
        if(num[i] == 0){
            continue;
        }
        if(num[i] > max_num){
            max_num = num[i];
        }
        if(num[i] < min_num){
            min_num = num[i];
        }
    }
    if(Prime(max_num - min_num)){
        cout << "Lucky Word" << endl;
        cout << max_num - min_num << endl;
    }else{
        cout << "No Answer" << endl;
        cout << "0" << endl;
    }
    return 0;
}