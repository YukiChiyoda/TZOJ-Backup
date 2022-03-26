#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	int b[n];
	for(int i = 0; i < n; i += 1){
		cin >> a[i];
		b[i] = a[i];
	}
	sort(a, a + n);
	
	return 0;
}
