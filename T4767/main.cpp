#include <iostream>
using namespace std;

void PreOrder(int num[], int n, int root){
	if(num[root])
		cout << num[root] << " ";
	if(2 * root + 1 < n)
		PreOrder(num, n, 2 * root + 1);
	if(2 * root + 2 < n)
		PreOrder(num, n, 2 * root + 2);
}

void PostOrder(int num[], int n, int root){
	if(2 * root + 1 < n)
		PostOrder(num, n, 2 * root + 1);
	if(2 * root + 2 < n)
		PostOrder(num, n, 2 * root + 2);
	if(num[root])
		cout << num[root] << " ";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int i = 0, num[1000] = {0};
		while(cin >> num[i], num[i] != -1)
			i += 1;
		PreOrder(num, i, 0);
		cout << endl;
		PostOrder(num, i, 0);
		cout << endl;
	}
	return 0;
}