#include <iostream>
#include <algorithm>
using namespace std;

struct Program{
    int begin;
    int end;
};

Program temp[1000000];

bool function(const Program a, const Program b){
    return a.end < b.end;
}

int main(){
    /*
    超时解决方案
    ios::sync_with_stdio(false);
    cin.tie(0);
    */
    int n;
    cin >> n;
    for(int i = 0; i < n; i += 1){
        cin >> temp[i].begin >> temp[i].end;
    }
    sort(temp, temp + n, function);
    int s = 0;
    int temp_end = INT_MIN;
    for(int i = 0; i < n; i += 1){
        if(temp_end <= temp[i].begin){
            temp_end = temp[i].end;
            if(temp_end != temp[i].begin){
                s += 1;
            }
        }
    }
    cout << s << endl;
    return 0;
}