#include <bits/stdc++.h>
using namespace std;

int main(){
int m, n, c, pa = 0;
    cin >> m >> n;
    for(int i = 0; i < n; i += 1){
    	cin >> c;
    	if(m >= c){
    		m = m - c;
		}else{
			pa += 1;
		}
    }
	cout << pa << endl;
	return 0;
}
