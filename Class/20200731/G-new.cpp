#include <iostream>
using namespace std;

int main(){
    int *a[10000];
    int n;
    while(cin >> n){
        for(int i = 0; i < n; i += 1){
            int m;
            cin >> m;
            a[i] = new int[m + 3];
            //以0位记录编号，1位记录数量，2位记录总值。
            a[i][0] = i + 1; //等效于 *(a[i] + 0) = i + 1
            a[i][1] = m;
            a[i][2] = 0;
            for(int j = 0; j < m; j += 1){
                cin >> a[i][j + 3];
                a[i][2] += a[i][j + 3];
            }
        }
        for(int i = 0; i < n - 1; i += 1){
            for(int j = 0; j < n - i - 1; j += 1){
                if((a[j][2] < a[j + 1][2]) || ((a[j][2] == a[j + 1][2]) && (a[j][0] > a[j + 1][0]))){
                    int *p = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = p;
                    //等效于swap(a[j], a[j + 1]);
                }
            }
        }
        for(int i = 0; i < n; i += 1){
            if(a[i][2] != 0){
                cout << a[i][0] << ":";
                for(int j = 0; j < a[i][1]; j += 1){
                    cout << " " << a[i][j + 3];
                }
                cout << endl;
            }
        }
        cout << endl;
        for(int i = 0; i < n; i += 1){
            delete [] a[i];
        }
    }
    return 0;
}