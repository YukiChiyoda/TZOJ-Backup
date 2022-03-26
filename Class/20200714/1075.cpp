#include <iostream>
using namespace std;

int main(){
	int m, n;
	cin >> m >> n;
	int f[m], g[n];
	for(int i = 0; i < m; i += 1){
		cin >> f[i];
	}
	for(int i = 0; i < n; i += 1){
		cin >> g[i];
	}
	int s = INT_MAX;
	for(int i = 0; i < m; i += 1){
		for(int j = 0; j < n; j += 1){
			int k;
			k = f[i] - g[j];
			if(k < 0){
				k = -k;
			}
			if(s > k){
				s = k;
			}
		}
	}
	cout << s << endl;
	return 0;
}
