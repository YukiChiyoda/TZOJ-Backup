#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

#define ll long long

queue <ll> Q[4];
int val[100001];
int n, m, q, u, v, t;
ll delta;
bool flag = false;

int findmax(){
	int res = 0;
	for(int i = 1; i <= 3; i += 1)
		if(!Q[i].empty() && (!res || Q[i].front() > Q[res].front()))
			res = i;
	return res;
}

ll calc(ll x){
	return 1ll * u * x / v;
}

void solve(int tim){
	ll x = Q[findmax()].front();
	Q[findmax()].pop();
	if(tim % t == 0){
		if(flag)
			cout << " ";
		cout << x + delta;
		flag = true;
	}
	Q[2].push(calc(x + delta) - delta - q);
	Q[3].push(x - calc(x + delta) - q);
	delta += q;
}

int main(){
	cin >> n >> m >> q >> u >> v >> t;
	for(int i = 1; i <= n; i += 1)
		cin >> val[i];
	sort(val + 1,val + 1 + n);
	for(int i = n; i >= 1; i -= 1)
		Q[1].push(val[i]);
	for(int i = 1; i <= m; i += 1)
		solve(i);
	cout << endl;
	flag = false;
	for(int i = 1; i * t <= n + m; i += 1){
		for(int j = 1; j <= t - 1; j += 1)
			Q[findmax()].pop();
		if(flag)
			cout << " ";
		cout << Q[findmax()].front() + delta;
		flag = true;
		Q[findmax()].pop();
	}
	cout << endl;
	flag = false;
	return 0;
}