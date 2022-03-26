#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int num[100000] = {0};
	for(int i = 0; i < n; i += 1)
		cin >> num[i];
	int sum = 0;
	for(int i = 0; i < n - 1; i += 1)
		sum += num[i] > num[i + 1] ? num[i] - num[i + 1] : 0;
	sum += num[n - 1];
	cout << sum << endl;
	return 0;
}