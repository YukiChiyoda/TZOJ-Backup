#include <iostream>
using namespace std;

int main(){
	int n, m, x;
	cin >> n >> m >> x;
	int num[n][m];
	bool o = false;
	for(int i = 0; i < n; i += 1){
		for(int k = 0; k < m; k += 1){
			cin >> num[i][k];
		}
	}
	int re;
	for(int i = 0; i < n; i += 1){
		re = 0;
		for(int k = 0; k < m; k += 1){
			re += num[i][k];
		}
		if(re == x){
			o = true;
		}
	}
	for(int k = 0; k < m; k += 1){
		re = 0;
		for(int i = 0; i < n; i += 1){
			re += num[i][k];
		}
		if(re == x){
			o = true;
		}
	}
	if(o == true){
		cout << "YES";
	}else{
		cout << "NO";
	}
	return 0;
}
