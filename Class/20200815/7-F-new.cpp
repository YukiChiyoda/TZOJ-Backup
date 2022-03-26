#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main(){
    int n, m;
    while(cin >> n >> m, n || m){
        int in[21] = {0};
        int out[21] = {0};
        for(int i = 0; i < m; i += 1){
                int x, y;
                cin >> x >> y;
                in[y] += 1;
                out[x] += 1;
        }
        int t1 = *max_element(in + 1, in + n + 1);
        int t2 = *max_element(out + 1, out + n + 1);
        cout << t1 << " " << t2 << endl;
    }
    return 0;
}