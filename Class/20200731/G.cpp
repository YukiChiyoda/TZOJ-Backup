#include <iostream>
#include <algorithm>
using namespace std;

struct Wealth{
    int num;
    int m;
    int thing[1000000]; //超出。
    int all;
};

bool function(const Wealth a, const Wealth b){
    if(a.all != b.all)      return a.all > b.all;
    return a.num < b.num;
}

int main(){
    int n;
    while(cin >> n){
        Wealth temp[10000];
        for(int i = 0; i < n; i += 1){
            temp[i].num = i;
            cin >> temp[i].m;
            int s = 0;
            for(int j = 0; j < temp[i].m; j += 1){
                cin >> temp[i].thing[j];
                s += temp[i].thing[j];
            }
            temp[i].all = s;
        }
        sort(temp, temp + n, function);
        for(int i = 0; i < n; i += 1){
            if(temp[i].all == 0){
                continue;
            }else{
                cout << temp[i].num << ": ";
                for(int j = 0; j < temp[i].m; j += 1){
                    if(j != 0){
                        cout << " ";
                    }
                    cout << temp[i].thing[j];
                }
                cout << endl;
            }
        }
        cout << endl;
    }
    return 0;
}