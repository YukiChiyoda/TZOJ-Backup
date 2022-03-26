#include <iostream>
using namespace std;

int main(){
	int n;
	while(cin >> n && n != 0){
		int num[n];
		for(int i = 0; i < n; i += 1){
			cin >> num[i];
		}
		int k, s = 0;
		cin >> k;
		for(int i = 0; i < n; i += 1){
			if(num[i] == k){
				s += 1;
			}
		}
		cout << s << endl;
	}
	return 0;
}
