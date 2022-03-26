#include <iostream>
#include <algorithm>
using namespace std;

int num[1000];

int Search(int left, int right, int x){
    int mid = (left + right) / 2;
    if(left > right){
        return -1;
    }
    if(num[mid] == x){ //仍要在左区间继续二分查找
        if(mid > 0 && num[mid - 1] == x){
            return Search(left, mid - 1, x);
        }else{
            return mid;
        }
    }else{
        if(num[mid] < x){
            return Search(mid + 1, right, x);
        }else{
            return Search(left, mid - 1, x);
        }
    }
}

int main(){
    int n, x;
    while(cin >> n >> x){
        for(int i = 0; i < n; i += 1){
            cin >> num[i];
        }
        sort(num, num + n);
        for(int i = 0; i < n; i += 1){
            for(int j = 0; j < n; j += 1){
                int c = -(num[i] * x * x) - (num[j] * x);
                if(Search(0, n - 1, c) != -1){
                    cout << "YES" << endl;
                    goto END;
                }
            }
        }
        cout << "NO" << endl;
        END:
            continue;
    }
    return 0;
}