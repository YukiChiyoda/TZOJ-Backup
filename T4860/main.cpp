#include <iostream>
using namespace std;

int n, m1, m2;
int a[10001], b[10001];
int ma, c, l;
int t = 2, ans = INT_MAX;

int main(){
    cin >> n >> m1 >> m2;
    for (int i = 1; i <= n; i += 1)
        cin >> a[i];
    if (m1 == 1){
        cout << 0 << endl;
        return 0;
    }
    while (m1 != 1){
        while (m1 % t == 0){
            m1 /= t;
			b[t] += 1;
		}
		ma = ma > t ? ma : t;
        b[t++] *= m2;
    }
    for (int i = 1; i <= n; i += 1){
        l = 0;
        for (int j = 2; j <= ma; j += 1){
            if (!b[j])
                continue;
            c = 0;
            while (!(a[i] % j)){
                a[i] /= j;
				c += 1;
			}
            if (!c){
                l = INT_MAX;
                break;
            }
            l = max(l, (b[j] - 1) / c);
        }
		ans = ans < l ? ans : l;
    }
    cout << (ans == INT_MAX ? -1 : ans + 1) << endl;
    return 0;
}