#include <iostream>
using namespace std;

int in[21], out[21];
int n, m;

int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; i += 1){
        for(int j = 1; j <= n; j += 1){
            int x;
            cin >> x;
            if(x){
                in[j] += 1;
                out[i] += 1;
            }
        }
    }
    for(int i = 0; i < m; i += 1){
        int x;
        cin >> x;
        cout << out[x] << " " << in[x] << endl;
    }
    return 0;
}