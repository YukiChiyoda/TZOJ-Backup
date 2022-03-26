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
        sort(in + 1, in + n + 1, greater<int>());
        sort(out + 1, out + n + 1, greater<int>());
        cout << in[1] << " " << out[1] << endl;
    }
    return 0;
}