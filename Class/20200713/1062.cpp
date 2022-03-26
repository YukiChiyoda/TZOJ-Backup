#include <iostream>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		if(n == 0){
			break;
		}
		int s = 1;
		for(int i = 0; i < n - 1; i += 1){
			s = (s + 1) * 2;
		}
		cout << s << endl;
	}
	return 0;
}
