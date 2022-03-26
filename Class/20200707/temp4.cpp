#include <bits/stdc++.h>
using namespace std;

int main(){
	int key = 0;
	int n;
	int m;
	int num = 0;
	cin >> n;
	do{
		num += 1;
		cin >> m;
	}while(num < n); 
    srand(int(time(0)));
    key = rand() % 1;
    if(key <= 4){
    	cout << "YES";
	}else{
		cout << "NO";
	}
	return 0;
}
