#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int num[10000];
//int fun[5040];
//int tot;
int temp;

int main(){
    int n, m;
    while(cin >> n >> m){
        for(int i = 1; i <= m; i += 1)
            cin >> num[i];
        /*
        for(int i = 1; i <= m; i += 1)
            for(int j = 1; j <= m; j += 1)
                num[j * m + i] = num[i];
        */
        for(int k = 1; k <= m; k += 1){
            for(int i = 1; i <= m; i += 1){
                do{
                    int x = 0;
                    for(int j = 1; j <= k; j += 1)
                        x += num[j] * pow(10, k - j);
                    //cout << "Test = " << x << endl;
                    if(x % n == 0){
                        cout << x << endl;
                        goto END;
                    }
                }while(next_permutation(num + i, num + k + i));
                /*
                int t = num[1];
                for(int i = 2; i < m; i += 1)
                    num[i] = num[i + 1];
                num[m] = t;
                */
            }
        }
        cout << "0" << endl;
        END:
            continue;
    }
    return 0;
}