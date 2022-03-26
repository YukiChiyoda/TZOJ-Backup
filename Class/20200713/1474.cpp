#include <iostream>
using namespace std;

int main(){
	int n[5];
	int a;
	cin >> a;
	
	//取各数位规律 
	n[0] = a / 10000 % 10;
	n[1] = a / 1000 % 10;
	n[2] = a / 100 % 10;
	n[3] = a / 10 % 10;
	n[4] = a % 10;
	
	int i = 0, k = 5;
	while(n[i] == 0){
		k -= 1;
		i += 1;
	}
	int num[k];
	int b = 0;
	for(i = 5 - k; i < 5; i += 1){
		num[b] = n[i];
		b += 1;
	}
	cout << k << endl;
	for(i = 0; i < k; i += 1){
		if(i == k - 1){
			cout << num[i] << endl;
		}else{
			cout << num[i] << " ";
		}
	}
	for(i = k - 1; i >= 0; i -= 1){
		if(i == 0){
			cout << num[i] << endl;
		}else{
			cout << num[i] << " ";
		}
	}	
	return 0;
}
