#include <iostream>
#include <algorithm>
using namespace std;

int com(int a, int b){
	if(a < 0)	a = -a;
	if(b < 0)	b = -b;
	return a > b;
	
}

int main(){
	int n;
	while(cin >> n && n != 0){
		int num[n];
		for(int i = 0; i < n; i += 1){
			cin >> num[i];
		}
		sort(num, num + n, com);
		for(int i = 0; i < n; i += 1){
			if(i == n - 1){
				cout << num[i] << endl;
			}else{
				cout << num[i] << " ";
			}
		}
	} 
	return 0;
}
