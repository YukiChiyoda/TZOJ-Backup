#include <bits/stdc++.h>
using namespace std;

int main(){
	int a;
	while(scanf("%d", &a) != EOF){
		if(a < 0 || a > 100){
			cout << "Score is error!" << endl;
		}else{
			if(a < 60){
				cout << "E" << endl;
			}else{
				if(a < 70){
					cout << "D" << endl;
				}else{
					if(a < 80){
						cout << "C" << endl;
					}else{
						if(a < 90){
							cout << "B" << endl;
						}else{
							cout << "A" << endl;
						}
					}
				}
			}
		}
	}
	return 0;
}
