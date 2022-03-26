#include <iostream>
using namespace std;

int num[1000000];

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
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while(cin >> n){
        for(int i = 0; i < n; i += 1){
            cin >> num[i];
        }
        int x;
        cin >> x;
        int k = Search(0, n - 1, x);
        if(k == -1){
            cout << "None" << endl;
        }else{
            cout << k + 1 << endl;
        }
    }
    return 0;
}