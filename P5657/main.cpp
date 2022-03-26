#include <iostream>
using namespace std;

int main(){
	int n;
	unsigned int long long s;
	cin >> n >> s;
	unsigned int long long temp = 1ULL << (n - 1);
	for(int i = 1; i <= n; i += 1){
		if(s < temp)
			cout << "0";
		else{
			cout << "1";
			s = (temp << 1) - s - 1;
		}
		temp >>= 1;
	}
	cout << endl;
	return 0;
}