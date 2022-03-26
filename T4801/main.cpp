#include <iostream>
#include <map>
using namespace std;

int main(){
	int n;
	cin >> n;
	map <int, int> num;
	for(int i = 0; i < n; i += 1){
		int x;
		cin >> x;
		num[x] += 1;
	}
	map <int, int> :: iterator it;
	for(it = num.begin(); it != num.end(); it++)
		cout << it -> first << " " << it -> second << endl;
	return 0;
}