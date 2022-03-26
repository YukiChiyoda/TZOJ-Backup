#include <iostream>
using namespace std;

struct Record{
	int Begin;
	int End;
};

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	while(cin >> n, n){
		int answer = -1;
		int dp = 0;
		Record result = {0, 0};
		Record temp = {0, -1};
		int num[10000] = {0};
		for(int i = 0; i < n; i += 1){
			cin >> num[i];
			if(dp + num[i] < num[i])
				dp = num[i], temp.Begin = temp.End = i;
			else
				dp += num[i], temp.End += 1;
			if(dp > answer)
				answer = dp, result = temp;
		}
		if(answer < 0)
			answer = 0, result.Begin = 0, result.End = n - 1;
		cout << answer << " "
			<< num[result.Begin] << " "
			<< num[result.End] << endl;
	}
	return 0;
}