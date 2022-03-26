#include <iostream>
using namespace std;

int fuck;
int num[36];

void print(int s){
	cout << fuck << "=";
	for(int i = 1; i <= s - 2; i += 1)
		cout << num[i] << "+";
	cout << num[s - 1] << endl;
}

void dfs(int n, int s, int t){
	if(n == 0 && s > 2){
		print(s);
		return;
	}
	for(int i = t; i <= n; i += 1){
		num[s] = i;
		dfs(n - i, s + 1, i);
	}
}

int main(){
	int n;
	while(cin >> n){
		fuck = n;
		dfs(n, 1, 1);
	}
	return 0;
}