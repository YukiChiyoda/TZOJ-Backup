#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int t = 0;
	int answer = 0;
	int num[50000] = {0};
	for(int i = 1; i <= n; i += 1){
		int x;
		cin >> x;
		t = (t + x) % 7;
		if(num[t] == 0 && t)
			num[t] = i;
		if(answer < i - num[t])
			answer = i - num[t];
	}
	cout << answer << endl;
	return 0;
}