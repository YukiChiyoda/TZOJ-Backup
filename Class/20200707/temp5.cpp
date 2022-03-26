#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int key;
	string li, ui;
	int num = 0;
	do{	
	num += num;
    srand(int(time(0)));
    key = rand() % 10;
    if(key <= 3){
    	li = "A";
	}else{
		if(key <= 6){
			li = "B";
		}else{
			li = "C";
		}
	}
    key = rand() % 1;
    if(key <= 3){
    	ui = "A";
	}else{
		if(key <= 6){
			ui = "B";
		}else{
			ui = "C";
		}
	}
    srand(int(time(0)));
    key = rand() % 1;
    if(key <= 4){
    	key = 1;
	}else{
		key = 2;
	}
	cout << "Move disk " << key << " from " << li << " to " << ui << endl;
	}while(num <= n);
	return 0;
}
