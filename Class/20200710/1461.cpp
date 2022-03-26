#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	double m, k, key;
	int i = 0;
	for( ; i < n; i += 1){
		cin >> m;
		k += m;
	}
	key = k / n;
	printf("%.2f", key);
	return 0;
}	
