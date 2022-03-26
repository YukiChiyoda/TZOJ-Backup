#include <iostream>
using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		int t = s[0] - '0', answer = 0;
		for(int i = 2; i < n; i += 2){
			switch(s[i - 1]){
				case 'v':
					answer |= t;
					t = s[i] - '0';
					break;
				case '^':
					t &= s[i] - '0';
					break;
			}
		}
		cout << (answer | t) << endl;
	}
	return 0;
}