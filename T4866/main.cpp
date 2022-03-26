#include <iostream>
using namespace std;

int n, na, nb;
int a[201], b[201];
int answer[2];

int fuck[5][5] = {
	0, -1, 1, 1, -1,
	1, 0, -1, 1, -1,
	-1, 1, 0, -1, 1,
	-1, -1, 1, 0, 1,
	1, 1, -1, -1, 0
};

void judge(int a, int b){
	//cout << "DBG: " << a << " " << b << endl;
	switch(fuck[a][b]){
		case 1:
			answer[0] += 1;
			break;
		case -1:
			answer[1] += 1;
			break;
	}
}

int main(){
	cin >> n >> na >> nb;
	for(int i = 1; i <= na; i += 1)
		cin >> a[i];
	for(int i = 1; i <= nb; i += 1)
		cin >> b[i];
	a[0] = a[na], b[0] = b[nb];
	for(int i = 1; i <= n; i += 1)
		judge(a[i % na], b[i % nb]);
	cout << answer[0] << " " << answer[1] << endl;
	return 0;
}