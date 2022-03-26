#include <iostream>
using namespace std;

int main(){
	//多组
	int k = 0;
	int b[10000];
	do{
		cin >> b[k];
		k += 1;
	}while(b[k - 1] != 0);
	
	for(int a = 0; a < k - 1; a += 1){
		int n, num;
		n = b[a];
		//cout << "\nn=" << n << endl; 
		num = n / 2 + 1;
	
		//正向 
		for(int i = 1; i <= num; i += 1){
			for(int m = 1; m <= num - i; m += 1){
				cout << " ";
			}
			for(int m = 1; m <= 2 * i - 1; m += 1){
				if(m == 2 * i - 1){
					cout << "*";
				}else{
					cout << "*";
				}
			}
			if((a != k - 2) || (num != 1)){
				//cout << a << i << k << num;
				cout << endl;
			}
		}
	
		//逆向
		num -= 1;
		for(int i = 1; i <= num; i += 1){
			for(int m = 1; m <= i; m += 1){
				cout << " ";
			}
			for(int m = 1; m <= 2 * (num - i) + 1; m += 1){
				if(m == 2 * (num - i) + 1){
					cout << "*";
				}else{
					cout << "*";
				}
		}
		
			if((a != k - 2) || (i != num)){
				//cout << a << i << k << num;
				cout << endl;
			}
		
		//	cout << a << i << k << num;
		//	cout << endl;
		}
	
	}
	return 0;
}

/*

    1    - 4
  1 2    - 2
1 2 3    - 0
  1 2    - 2
    1    - 4

      1  - 6
    1 2  - 4
  1 2 3  - 2
1 2 3 4  - 0
  1 2 3  - 2
    1 2  - 4
      1  - 6

*/

