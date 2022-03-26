#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int answer;
int num[10];

void dfs(int now, int t){
	if(t != 0 && t % n == 0){
		if(answer != 0)
			answer = answer < t ? answer : t;
		else
			answer = t;
	}
	if(now == m)	return;
	dfs(now + 1, t * 10 + num[now]);
	dfs(now + 1, t);
}

void Do(){
	answer = 0;
	sort(num, num + m);
	do{
		dfs(0, 0);
	}while(next_permutation(num, num + m));
	cout << answer << endl;
}

int main(){
	while(cin >> n >> m){
		for(int i = 0; i < m; i += 1)
			cin >> num[i];
		if(n == 0 || m == 0)
			cout << 0 << endl;
		else
			Do();
	}
	return 0;
}