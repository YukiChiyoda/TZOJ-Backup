#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i += 1){
		int m;
		cin >> m;
		int num[m];
		for(int k = 0; k < m; k += 1){
			cin >> num[k];
		}
		sort(num, num + m);
		for(int k = 0; k < m; k += 1){
			if(k == m - 1){
				cout << num[k];
			}else{
				cout << num[k] << " ";	
			}
		}
		cout << endl;
	}
	return 0;
}
